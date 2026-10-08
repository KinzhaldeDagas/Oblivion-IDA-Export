void __thiscall sub_437D40(_DWORD **this)
{
  char *v2; // eax
  int v3; // ecx
  NiObject *v4; // ecx
  NiObject *v5; // esi
  NiObject *v6; // edi
  void *slot; // [esp+8h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+Ch] [ebp-108h] BYREF

  v2 = (char *)(*(int (__thiscall **)(_DWORD))(**(this + 8) + 0x170))(*(this + 8)); /*0x437d62*/
  sub_46D540(Str, v2); /*0x437d6a*/
  v3 = *(_DWORD *)MEMORY[0xB33A1C]; /*0x437d75*/
  slot = 0; /*0x437d7f*/
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, void **))(*(_DWORD *)v3 + 4))(v3, Str, &slot) ) /*0x437d91*/
  {
    if ( slot ) /*0x437d9d*/
    {
      v4 = *((NiObject **)slot + 2); /*0x437d9f*/
      if ( v4 ) /*0x437da4*/
      {
        v5 = NiObject_CloneWithPointerMap(v4); /*0x437dac*/
        if ( v5 ) /*0x437db0*/
        {
          v6 = v5->__vftable->Unk_02(v5); /*0x437dbc*/
          if ( v6 ) /*0x437dc0*/
          {
            if ( ((unsigned __int8 (__thiscall *)(NiObject *))v6->__vftable[2].super.Destructor)(v6) ) /*0x437de5*/
              sub_4A01B0(v6, 6); /*0x437def*/
          }
          else
          {
            slot = v5; /*0x437dc2*/
            InterlockedIncrement((volatile LONG *)&v5->members); /*0x437dca*/
            NiPointerSlot_Release(&slot); /*0x437dd4*/
          }
          if ( v6 ) /*0x437df6*/
            ((void (__thiscall *)(_DWORD **, NiObject *))(*this)[0xD])(this, v6); /*0x437e00*/
        }
      }
    }
  }
}
