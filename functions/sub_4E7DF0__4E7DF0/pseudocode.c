float *__thiscall sub_4E7DF0(float *this)
{
  bool v2; // zf
  NiAVObject *v3; // eax
  NiAVObject *v4; // ecx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ebx
  NiAVObject *v8; // eax
  NiAVObject *v9; // ecx
  int v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // ebx
  int v13; // [esp+28h] [ebp-1Ch] BYREF
  float v14; // [esp+2Ch] [ebp-18h]
  float v15; // [esp+30h] [ebp-14h]
  float v16; // [esp+34h] [ebp-10h]
  int v17; // [esp+40h] [ebp-4h]

  sub_67EDC0(this);
  *(this + 8) = 0.0;
  *(this + 9) = 0.0;
  *(this + 5) = Vector3_InitValue_;
  *(this + 6) = *(&Vector3_InitValue_ + 1);
  *(this + 7) = dword_B3F9B0;
  *(this + 0xA) = 0.0;
  v2 = dword_B36080 == 0;
  v17 = 0;
  if ( v2 )
  {
    *(float *)&v13 = 1.0;
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    v3 = sub_47FD30(flt_A37CC8, (NiD3DPassVtbl **)&v13);
    v4 = (NiAVObject *)dword_B36084;
    v5 = InterlockedDecrement;
    v6 = (int)v3;
    if ( (NiAVObject *)dword_B36084 != v3 )
    {
      if ( v4 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))dword_B36084;
        if ( !v5((volatile LONG *)&v4->members) )
        {
          if ( v7 )
            (**v7)(v7, 1);
        }
      }
      v4 = (NiAVObject *)v6;
      dword_B36084 = v6;
      if ( v6 )
      {
        InterlockedIncrement((volatile LONG *)(v6 + 4));
        v4 = (NiAVObject *)dword_B36084;
      }
    }
    NiAVObject_UpdateNiAVObject(v4, 0.0, 1);
    *(float *)&v13 = 0.0;
    v14 = 0.0;
    v15 = 1.0;
    v16 = 0.0;
    v8 = sub_47FD30(flt_A37CC8, (NiD3DPassVtbl **)&v13);
    v9 = (NiAVObject *)dword_B36088;
    v10 = (int)v8;
    if ( (NiAVObject *)dword_B36088 != v8 )
    {
      if ( v9 )
      {
        v11 = (void (__thiscall ***)(_DWORD, int))dword_B36088;
        if ( !v5((volatile LONG *)&v9->members) )
        {
          if ( v11 )
            (**v11)(v11, 1);
        }
      }
      v9 = (NiAVObject *)v10;
      dword_B36088 = v10;
      if ( v10 )
      {
        InterlockedIncrement((volatile LONG *)(v10 + 4));
        v9 = (NiAVObject *)dword_B36088;
      }
    }
    NiAVObject_UpdateNiAVObject(v9, 0.0, 1);
  }
  ++dword_B36080;
  return this;
}
