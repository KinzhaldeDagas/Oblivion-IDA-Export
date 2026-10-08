bool __thiscall sub_89FA50(NiTriBasedGeomData *this, _DWORD *a2)
{
  bool result; // al
  int v5; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // ecx
  int v8; // ecx
  _DWORD v9[2]; // [esp+10h] [ebp-3Ch] BYREF
  char v10; // [esp+18h] [ebp-34h]
  _DWORD *v11; // [esp+1Ch] [ebp-30h]
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  _BYTE v14[12]; // [esp+28h] [ebp-24h] BYREF
  _DWORD *v15; // [esp+34h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-10h]
  unsigned int v17; // [esp+48h] [ebp-4h]
  bool v18; // [esp+50h] [ebp+4h]

  result = sub_89D6F0(this, (int)a2); /*0x89fa7d*/
  v18 = result; /*0x89fa86*/
  if ( result ) /*0x89fa8a*/
  {
    v11 = 0; /*0x89fa90*/
    v12 = 0; /*0x89fa94*/
    v13 = 0x80000000; /*0x89fa98*/
    v9[0] = 0; /*0x89faa0*/
    v9[1] = 0; /*0x89faa4*/
    v10 = 1; /*0x89faa8*/
    v17 = 0; /*0x89fab4*/
    v15 = 0; /*0x89fab8*/
    v16 = 0x80000000; /*0x89fabc*/
    sub_89F580(this, (int)v9); /*0x89fac4*/
    sub_89F580(a2, (int)v14); /*0x89fad0*/
    v5 = MEMORY[0xBA9DE4]; /*0x89fadb*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89fae1*/
    if ( v16 >= 0 ) /*0x89fae8*/
    {
      v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x89faed*/
      if ( !v7 ) /*0x89faf5*/
        v7 = unk_BA7D9C; /*0x89faf7*/
      sub_8A75D0(v7, v15, 8 * v16, 0x14); /*0x89fb10*/
    }
    v17 = 0xFFFFFFFF; /*0x89fb1b*/
    if ( v13 >= 0 ) /*0x89fb23*/
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x89fb28*/
      if ( !v8 ) /*0x89fb30*/
        v8 = unk_BA7D9C; /*0x89fb32*/
      sub_8A75D0(v8, v11, 8 * v13, 0x14); /*0x89fb4b*/
    }
    return v18; /*0x89fb50*/
  }
  return result; /*0x89fb54*/
}
