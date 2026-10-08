void __thiscall sub_51C8C0(TESBoundObject *this, TESObjectREFR *reference)
{
  char **v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  char *v7; // eax
  char *v8; // ecx
  _BYTE *v9; // edx
  char v10; // al
  char Str[260]; // [esp+Ch] [ebp-108h] BYREF

  v3 = (char **)((char *)this + 0xF0); /*0x51c8e0*/
  if ( this != (TESBoundObject *)0xFFFFFF10 ) /*0x51c8e8*/
  {
    do /*0x51c959*/
    {
      if ( !v3[1] && !*v3 ) /*0x51c8f6*/
        break; /*0x51c8f9*/
      v4 = (char *)(*(int (__thiscall **)(char **))(*((_DWORD *)this + 0x2B) + 0x14))((char **)this + 0x2B); /*0x51c90a*/
      v5 = Str; /*0x51c90c*/
      do /*0x51c91c*/
      {
        v6 = *v4; /*0x51c910*/
        *v5++ = *v4++; /*0x51c912*/
      }
      while ( v6 ); /*0x51c91c*/
      v7 = strrchr(Str, 0x5C); /*0x51c925*/
      v8 = *v3; /*0x51c92a*/
      v9 = v7 + 1; /*0x51c92f*/
      do /*0x51c93e*/
      {
        v10 = *v8; /*0x51c932*/
        *v9++ = *v8++; /*0x51c934*/
      }
      while ( v10 ); /*0x51c93e*/
      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)Str, 1, 1); /*0x51c94f*/
      v3 = (char **)v3[1]; /*0x51c954*/
    }
    while ( v3 ); /*0x51c959*/
  }
  TESBoundObject_ReleaseReferenceModel(this, reference); /*0x51c95e*/
}
