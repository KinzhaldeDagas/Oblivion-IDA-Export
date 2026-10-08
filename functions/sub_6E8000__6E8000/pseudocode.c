char __thiscall sub_6E8000(_DWORD *this)
{
  _DWORD *v1; // ebp
  LONG v2; // eax
  int v3; // ecx
  unsigned __int8 v4; // bl
  unsigned int v5; // esi
  int v6; // edi
  int (__thiscall ***v7)(_DWORD, int); // esi
  char v8; // dl
  unsigned int i; // ecx
  int v10; // esi
  char v12; // [esp+7h] [ebp-5h]

  v1 = this; /*0x6e8004*/
  v2 = *(this + 4); /*0x6e8006*/
  if ( v2 ) /*0x6e800f*/
  {
    v3 = *(_DWORD *)(v2 + 0x10); /*0x6e8015*/
    v4 = *(_BYTE *)(v2 + 0x14); /*0x6e8019*/
    v5 = *(_DWORD *)(v2 + 8); /*0x6e801d*/
    v6 = *(_DWORD *)(v2 + 0xC); /*0x6e8023*/
    if ( !v5 ) /*0x6e8026*/
    {
      v7 = (int (__thiscall ***)(_DWORD, int))v2; /*0x6e8028*/
      v2 = InterlockedDecrement((volatile LONG *)(v2 + 4)); /*0x6e8032*/
      if ( !v2 ) /*0x6e803a*/
        LOBYTE(v2) = (**v7)(v7, 1); /*0x6e8048*/
      v1[4] = 0; /*0x6e804a*/
      *((_BYTE *)v1 + 0xC) = byte_A7C6AC; /*0x6e805a*/
      return v2; /*0x6e8061*/
    }
    LOBYTE(v2) = *(_BYTE *)(v6 + 4); /*0x6e8065*/
    v12 = v2; /*0x6e8068*/
    if ( v5 == 1 ) /*0x6e806c*/
      goto LABEL_16; /*0x6e806c*/
    if ( v3 == 1 || v3 == 5 ) /*0x6e8076*/
    {
      v8 = 1; /*0x6e8078*/
      for ( i = 1; i < v5; ++i ) /*0x6e807a*/
      {
        if ( *(_BYTE *)(v6 + i * v4 + 4) != (_BYTE)v2 ) /*0x6e8093*/
          v8 = 0; /*0x6e8095*/
        if ( !v8 ) /*0x6e809c*/
          return v2; /*0x6e809c*/
        v1 = this; /*0x6e8081*/
      }
LABEL_16:
      v10 = v1[4]; /*0x6e80aa*/
      if ( v10 ) /*0x6e80af*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x6e80b5*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x6e80cb*/
        LOBYTE(v2) = v12; /*0x6e80cd*/
        v1[4] = 0; /*0x6e80d1*/
      }
      *((_BYTE *)v1 + 0xC) = v2; /*0x6e80d8*/
    }
  }
  return v2; /*0x6e805d*/
}
