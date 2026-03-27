_DWORD *__userpurge sub_74FE30@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *v6; // esi
  float *v7; // eax
  float *v8; // ebp
  float *v9; // eax
  float *v10; // ebp
  Ni2DBuffer *v11; // eax

  sub_75E480(a4);
  if ( a4[0x36] >= 0xA010068u )
  {
    if ( (*(_BYTE *)(a1 + 8) & 6) == 0 && 0.0 == *(float *)(a1 + 0x10) )
      *(float *)(a1 + 0x10) = (double)rand() / dbl_A3D5A8 * fCostant_100;
    v11 = (Ni2DBuffer *)sub_7124A0(a4);
    return NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x48), v11);
  }
  else
  {
    result = (_DWORD *)sub_7124A0(a4);
    v6 = result;
    if ( result )
    {
      InterlockedIncrement(result + 1);
      v7 = (float *)FormHeapAlloc(0x18u);
      if ( v7 )
        v8 = sub_6D2990(v7, 0);
      else
        v8 = 0;
      sub_6DE010((Ni2DBuffer **)v8, v6[3], v6[2], v6[4]);
      v6[2] = 0;
      v6[3] = 0;
      v6[4] = 0;
      *((_BYTE *)v6 + 0x14) = 0;
      (*(void (__thiscall **)(int, float *, _DWORD, int, int))(*(_DWORD *)a1 + 0x84))(a1, v8, 0, a3, a2);
      v9 = (float *)FormHeapAlloc(0x18u);
      if ( v9 )
        v10 = sub_6E7F50(v9, 0);
      else
        v10 = 0;
      NiBoolData::NiBoolData((NiBoolData *)v10, v6[7], v6[8], v6[6]);
      v6[6] = 0;
      v6[7] = 0;
      *((_BYTE *)v6 + 0x24) = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x84))(a1);
      result = (_DWORD *)InterlockedDecrement(v6 + 1);
      if ( !result )
        return (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))*v6)(v6, 1);
    }
  }
  return result;
}
