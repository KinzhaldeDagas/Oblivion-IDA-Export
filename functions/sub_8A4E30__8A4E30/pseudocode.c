void __thiscall sub_8A4E30(NodeVoid *this, int *a2, int a3)
{
  int (__thiscall *v4)(NodeVoid *, char *); // edx
  int v5; // edi
  __m128 *v6; // ecx
  NodeVoid *v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  void **DataAddRef; // eax
  bool v15; // bl
  void (__thiscall ***v16)(void *, int); // esi
  void **v17; // eax
  void *v18; // ecx
  int (__thiscall *v19)(void *, int); // eax
  volatile LONG *v20; // edi
  void (__thiscall ***v21)(void *, int); // esi
  int v22; // [esp+1Ch] [ebp-1Ch] BYREF
  int v23; // [esp+20h] [ebp-18h]
  void *outData; // [esp+24h] [ebp-14h] BYREF
  void *v25; // [esp+28h] [ebp-10h] BYREF
  unsigned int v26; // [esp+34h] [ebp-4h]

  v4 = *((int (__thiscall **)(NodeVoid *, char *))this->data + 0x1D); /*0x8a4e5b*/
  v23 = 0; /*0x8a4e65*/
  v5 = a3; /*0x8a4e6f*/
  v6 = (__m128 *)v4(this, (char *)&v22 + 3); /*0x8a4e73*/
  if ( v6 ) /*0x8a4e77*/
  {
    outData = *(void **)(a3 + 0x10); /*0x8a4e7c*/
    if ( *(float *)&outData != 1.0 ) /*0x8a4e8f*/
      sub_8A2D60(v6, *(float *)&outData); /*0x8a4e95*/
  }
  sub_89F5D0(this, (int)a2, (_DWORD **)a3); /*0x8a4ea6*/
  v7 = this + 2; /*0x8a4eb6*/
  a2[6] = (*((_DWORD *)this + 6) | a2[6]) & 0xFFFFFFC7; /*0x8a4eb9*/
  v8 = *((_DWORD *)this + 2); /*0x8a4ebc*/
  if ( !v8 || v8 == 0xFFFFFFEC ) /*0x8a4ec8*/
    LOWORD(v9) = 0; /*0x8a4ecf*/
  else
    v9 = *(_DWORD *)(v8 + 0x30); /*0x8a4eca*/
  if ( (v9 & 0x2000) != 0 || 1.0 != *(float *)(a3 + 0x10) ) /*0x8a4ee2*/
  {
    v10 = a2[2]; /*0x8a4ee4*/
    if ( !v10 || v10 == 0xFFFFFFEC ) /*0x8a4ef0*/
      v11 = 0; /*0x8a4ef7*/
    else
      v11 = *(_DWORD *)(v10 + 0x30); /*0x8a4ef2*/
    v12 = v11 | 0x2000; /*0x8a4ef9*/
    if ( v10 ) /*0x8a4f00*/
    {
      v13 = v10 + 0x14; /*0x8a4f02*/
      if ( v13 ) /*0x8a4f05*/
        *(_DWORD *)(v13 + 0x1C) = v12; /*0x8a4f07*/
    }
    (*(void (__thiscall **)(int *))(*a2 + 0x80))(a2); /*0x8a4f14*/
  }
  while ( 1 ) /*0x8a4f18*/
  {
    v15 = 0; /*0x8a4f30*/
    if ( v7 ) /*0x8a4f18*/
    {
      DataAddRef = NodeVoid_GetDataAddRef(v7, &outData); /*0x8a4f21*/
      v23 |= 1u; /*0x8a4f26*/
      if ( *DataAddRef ) /*0x8a4f2b*/
        v15 = 1; /*0x8a4f18*/
    }
    if ( (v23 & 1) != 0 ) /*0x8a4f3b*/
    {
      v16 = (void (__thiscall ***)(void *, int))outData; /*0x8a4f3d*/
      v23 &= ~1u; /*0x8a4f41*/
      if ( *(float *)&outData != 0.0 && !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a4f4e*/
      {
        if ( v16 ) /*0x8a4f5a*/
          (**v16)(v16, 1); /*0x8a4f64*/
      }
    }
    if ( !v15 ) /*0x8a4f68*/
      break; /*0x8a4f68*/
    v17 = NodeVoid_GetDataAddRef(v7, &v25); /*0x8a4f71*/
    v18 = *v17; /*0x8a4f76*/
    v19 = *(int (__thiscall **)(void *, int))(*(_DWORD *)*v17 + 0x18); /*0x8a4f7a*/
    v26 = 0; /*0x8a4f7e*/
    v20 = (volatile LONG *)v19(v18, v5); /*0x8a4f88*/
    v26 = 0xFFFFFFFF; /*0x8a4f90*/
    if ( v25 ) /*0x8a4f98*/
    {
      v21 = (void (__thiscall ***)(void *, int))v25; /*0x8a4f9a*/
      if ( !InterlockedDecrement((volatile LONG *)v25 + 1) ) /*0x8a4fa0*/
        (**v21)(v21, 1); /*0x8a4fb6*/
    }
    sub_8A46C0(a2, v20); /*0x8a4fbd*/
    v7 = v7->next; /*0x8a4fc2*/
    v5 = a3; /*0x8a4fc5*/
  }
}
