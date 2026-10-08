// Verified 2026-09-30 with Oblivion x86 and comparative Fallout symbols: this is SortByEnabled, not a constant-map reset. Map+10 is the entry pointer array; +14 capacity, +16 end/size, +18 live count and +1A grow are ushort fields of the array at+0C. For size>1 it swaps byte+8==1 entries into the earliest disabled position using 9A9670 and temporary NiPointer references. Enabled relative order is preserved for canonical bool flags; disabled-tail order is not stable, and later selector re-enabling can change overlapping-write order. Outer null entries are skipped, but the inner disabled search dereferences its entry. Fallout 8222E5C8 SortByEnabled calls 8222E5F8 SortListByEnabled for two arrays and uses nonzero enabled tests/direct pointer swaps; Oblivion has one array, outer equality-to-1 and explicit reference accounting. Base vtable AB2A4C and VS/PS tables AB2BAC/AB297C use this method at+48.
// DX11 map permutation audit 2026-10-01: 9A97B0 retains the current entry in a temporary NiPointer while9A9670 exchanges two nonnull array positions. With valid owning-array reference counts, neither displaced entry reaches zero and the completed sort preserves the pointer multiset, each entry reference count, array end/live/capacity/grow. This permits a final bulk permutation with unchanged ownership under an exclusive native map-write/lifetime interval; no native AddRef/Release/destructor calls may run under a private metadata gate. A partial write must roll back all attempted slots before the interval is released. This equivalence does not cover active-map pointer replacement, arbitrary insertion/removal or untracked concurrent readers.
// DX11 writer ABI audit 2026-10-01: thiscall/zero arguments/RET0 SortByEnabled mutates entry ordering. This is a metadata writer even when it does not allocate/free. A completed sort must revoke older bucket capture epochs; a new read phase may then recapture.
void __thiscall NiD3DShaderConstantMap_SortByEnabled(NiD3DShaderConstantMap *this)
{
  unsigned int end; // ecx
  NiD3DShaderConstantMapEntry *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  NiD3DShaderConstantMapEntry **v6; // ebp
  NiD3DShaderConstantMapEntry **v7; // ebp
  unsigned int v8; // [esp+Ch] [ebp-Ch]
  unsigned int v9; // [esp+10h] [ebp-8h]
  NiD3DShaderConstantMapEntry *value; // [esp+14h] [ebp-4h] BYREF

  end = this->Entries.end; /*0x9a97b6*/
  v3 = 0; /*0x9a97bc*/
  v4 = 0xFFFFFFFF; /*0x9a97be*/
  value = 0; /*0x9a97c4*/
  v9 = end; /*0x9a97c8*/
  if ( end <= 1 ) /*0x9a97cc*/
    return; /*0x9a97cc*/
  v5 = 0; /*0x9a97d2*/
  v8 = 0; /*0x9a97d6*/
  do /*0x9a98d6*/
  {
    v6 = (NiD3DShaderConstantMapEntry **)(&this->Entries.data->_vtbl + v5); /*0x9a97e7*/
    if ( v3 != *v6 ) /*0x9a97ea*/
    {
      if ( v3 ) /*0x9a97ee*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v3->RefCount) ) /*0x9a97f4*/
          (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v3->_vtbl)(v3, 1); /*0x9a9806*/
        v5 = v8; /*0x9a9808*/
      }
      v3 = *v6; /*0x9a980c*/
      value = *v6; /*0x9a9811*/
      if ( !value ) /*0x9a9815*/
        goto LABEL_26; /*0x9a9815*/
      InterlockedIncrement((volatile LONG *)&v3->RefCount); /*0x9a981f*/
      v5 = v8; /*0x9a9825*/
    }
    if ( v3 ) /*0x9a982b*/
    {
      if ( LOBYTE(v3->Unk08) == 1 ) /*0x9a9835*/
      {
        if ( v4 < v5 ) /*0x9a983d*/
        {
          NiTArray_ConstantMapEntry_SetAt( /*0x9a9850*/
            &this->Entries,
            v5,
            (NiD3DShaderConstantMapEntry *const *)&this->Entries.data->_vtbl + v4);
          NiTArray_ConstantMapEntry_SetAt(&this->Entries, v4++, &value); /*0x9a985d*/
          if ( v4 >= v9 ) /*0x9a9869*/
            goto LABEL_28; /*0x9a9869*/
          while ( 1 ) /*0x9a9876*/
          {
            v7 = (NiD3DShaderConstantMapEntry **)(&this->Entries.data->_vtbl + v4); /*0x9a9876*/
            if ( v3 != *v7 ) /*0x9a9879*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v3->RefCount) ) /*0x9a987f*/
                (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v3->_vtbl)(v3, 1); /*0x9a9891*/
              v3 = *v7; /*0x9a9893*/
              value = *v7; /*0x9a9898*/
              if ( value ) /*0x9a989c*/
                InterlockedIncrement((volatile LONG *)&v3->RefCount); /*0x9a98a2*/
            }
            if ( !LOBYTE(v3->Unk08) ) /*0x9a98a8*/
              break; /*0x9a98a8*/
            if ( ++v4 >= v9 ) /*0x9a98b5*/
              goto LABEL_28; /*0x9a98b5*/
          }
          if ( v4 >= v9 ) /*0x9a98bd*/
            goto LABEL_28; /*0x9a98bd*/
          v5 = v8; /*0x9a98bf*/
        }
      }
      else if ( v4 > v5 ) /*0x9a98c7*/
      {
        v4 = v5; /*0x9a98c9*/
      }
    }
LABEL_26:
    v8 = ++v5; /*0x9a98d2*/
  }
  while ( v5 < v9 ); /*0x9a98d6*/
  if ( !v3 ) /*0x9a98de*/
    return; /*0x9a98de*/
LABEL_28:
  if ( !InterlockedDecrement((volatile LONG *)&v3->RefCount) ) /*0x9a98e4*/
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v3->_vtbl)(v3, 1); /*0x9a98f6*/
}
