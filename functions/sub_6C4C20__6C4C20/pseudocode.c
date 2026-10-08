void __thiscall sub_6C4C20(NiTriBasedGeomData *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  unsigned int i; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // edi
  int v9; // ebx
  LONG v10; // edi
  unsigned int v11; // [esp+14h] [ebp-18h]
  int **v12; // [esp+18h] [ebp-14h] BYREF
  LONG v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v3 = a2; /*0x6c4c49*/
  sub_715E40(this, (int)a2); /*0x6c4c4e*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i ) /*0x6c4c55*/
  {
    v5 = *(_DWORD **)(*(_DWORD *)&this->members.m_usTriangles + 4 * i); /*0x6c4c63*/
    if ( v5 ) /*0x6c4c68*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v5 + 0x38))(v5, a2); /*0x6c4c72*/
      sub_6C9590(v5, i, *(Ni2DBuffer ***)&this->members.super.m_ucKeepFlags); /*0x6c4c7a*/
    }
  }
  NiTMap_GetAt((_DWORD *)*a2, (int)this, &v12); /*0x6c4c92*/
  v11 = 0; /*0x6c4c9b*/
  if ( *((_DWORD *)this + 0x1E) ) /*0x6c4c97*/
  {
    v12 += 0x1C; /*0x6c4cac*/
    do /*0x6c4d17*/
    {
      v6 = (_DWORD *)*v3; /*0x6c4cb7*/
      v7 = *(_DWORD *)(*((_DWORD *)this + 0x1C) + 4 * v11); /*0x6c4cbf*/
      v8 = *(_DWORD **)(v6[2] + 4 * (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*v3 + 4))(*v3, v7)); /*0x6c4ccf*/
      if ( v8 ) /*0x6c4cd4*/
      {
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v7, v8[1]) ) /*0x6c4ce6*/
        {
          v8 = (_DWORD *)*v8; /*0x6c4ce8*/
          if ( !v8 ) /*0x6c4cec*/
            goto LABEL_10; /*0x6c4cec*/
        }
        v10 = v8[2]; /*0x6c4d40*/
        v13 = v10; /*0x6c4d45*/
        if ( v10 ) /*0x6c4d49*/
          InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x6c4d4f*/
        v14 = 0; /*0x6c4d5e*/
        sub_6C4790(v12, &v13); /*0x6c4d66*/
        v14 = 0xFFFFFFFF; /*0x6c4d6d*/
        if ( v10 ) /*0x6c4d75*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x6c4d7b*/
            (**(void (__thiscall ***)(LONG, int))v10)(v10, 1); /*0x6c4d8d*/
        }
      }
      else
      {
LABEL_10:
        sub_6C4790(v12, (LONG *)(4 * v11 + *((_DWORD *)this + 0x1C))); /*0x6c4cee*/
      }
      v3 = a2; /*0x6c4d09*/
      ++v11; /*0x6c4d13*/
    }
    while ( v11 < *((_DWORD *)this + 0x1E) ); /*0x6c4d17*/
  }
  v9 = *((_DWORD *)this + 0x1F); /*0x6c4d19*/
  if ( v9 ) /*0x6c4d1e*/
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 0x38))(v9, v3); /*0x6c4d28*/
}
