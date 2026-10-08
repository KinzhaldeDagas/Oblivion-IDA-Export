int __thiscall sub_8A5120(NodeVoid *this, signed int outData)
{
  _DWORD *v3; // ebp
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  NodeVoid *i; // edi
  bool v6; // bl
  void (__thiscall ***v7)(_DWORD, int); // esi
  void (__thiscall *v8)(_DWORD *, void *); // eax
  void (__thiscall ***v9)(void *, int); // esi
  int (__cdecl *v10)(int, NodeVoid *, int, int *, int); // eax
  int v12; // [esp-18h] [ebp-48h]
  int v13; // [esp-18h] [ebp-48h]
  void *v14; // [esp-8h] [ebp-38h]
  int v15; // [esp+10h] [ebp-20h]
  int v16; // [esp+14h] [ebp-1Ch] BYREF
  void *v17; // [esp+18h] [ebp-18h] BYREF
  int v18; // [esp+1Ch] [ebp-14h] BYREF
  NodeVoid *v19; // [esp+20h] [ebp-10h]
  unsigned int v20; // [esp+2Ch] [ebp-4h]

  v19 = this; /*0x8a5149*/
  v3 = (_DWORD *)outData; /*0x8a514d*/
  v15 = 0; /*0x8a5152*/
  sub_89F9A0(this, outData); /*0x8a515a*/
  v16 = sub_8A4740(this); /*0x8a516d*/
  v12 = v3[0x88]; /*0x8a517e*/
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v12 + 8); /*0x8a517f*/
  outData = 4; /*0x8a5182*/
  v4(v12, &v16, 4, &outData, 1); /*0x8a518a*/
  for ( i = this + 2; ; i = i->next ) /*0x8a518f*/
  {
    v6 = 0; /*0x8a51ac*/
    if ( i ) /*0x8a5194*/
    {
      v15 |= 1u; /*0x8a51a2*/
      if ( *NodeVoid_GetDataAddRef(i, (void **)&outData) ) /*0x8a51a7*/
        v6 = 1; /*0x8a5194*/
    }
    if ( (v15 & 1) != 0 ) /*0x8a51b7*/
    {
      v7 = (void (__thiscall ***)(_DWORD, int))outData; /*0x8a51b9*/
      v15 &= ~1u; /*0x8a51bd*/
      if ( outData ) /*0x8a51c4*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(outData + 4)) ) /*0x8a51ca*/
        {
          if ( v7 ) /*0x8a51d6*/
            (**v7)(v7, 1); /*0x8a51e0*/
        }
      }
    }
    if ( !v6 ) /*0x8a51e4*/
      break; /*0x8a51e4*/
    v14 = *NodeVoid_GetDataAddRef(i, &v17); /*0x8a51f7*/
    v8 = *(void (__thiscall **)(_DWORD *, void *))(*v3 + 0x2C); /*0x8a51f8*/
    v20 = 0; /*0x8a51fd*/
    v8(v3, v14); /*0x8a5205*/
    v20 = 0xFFFFFFFF; /*0x8a520d*/
    if ( v17 ) /*0x8a5215*/
    {
      v9 = (void (__thiscall ***)(void *, int))v17; /*0x8a5217*/
      if ( !InterlockedDecrement((volatile LONG *)v17 + 1) ) /*0x8a521d*/
        (**v9)(v9, 1); /*0x8a5233*/
    }
  }
  v13 = v3[0x88]; /*0x8a5254*/
  v10 = *(int (__cdecl **)(int, NodeVoid *, int, int *, int))(v13 + 8); /*0x8a5255*/
  v18 = 4; /*0x8a5258*/
  return v10(v13, v19 + 3, 4, &v18, 1); /*0x8a5271*/
}
