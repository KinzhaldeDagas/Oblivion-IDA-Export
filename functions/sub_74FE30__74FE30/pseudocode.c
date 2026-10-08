_DWORD *__userpurge sub_74FE30@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, _DWORD *a4)
{
  _DWORD *result; // eax
  _DWORD *v6; // esi
  NiObject *v7; // eax
  Ni2DBuffer **v8; // ebp
  NiObject *v9; // eax
  NiBoolData *v10; // ebp
  Ni2DBuffer *v11; // eax

  j_NiSingleInterpController_LinkObject((int)a4); /*0x74fe39*/
  if ( a4[0x36] >= 0xA010068u ) /*0x74fe48*/
  {
    if ( (*(_BYTE *)(a1 + 8) & 6) == 0 && 0.0 == *(float *)(a1 + 0x10) ) /*0x74ff2c*/
      *(float *)(a1 + 0x10) = (double)rand() / dbl_A3D5A8 * fCostant_100; /*0x74ff47*/
    v11 = (Ni2DBuffer *)sub_7124A0(a4); /*0x74ff4c*/
    return NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x48), v11); /*0x74ff55*/
  }
  else
  {
    result = (_DWORD *)sub_7124A0(a4); /*0x74fe51*/
    v6 = result; /*0x74fe56*/
    if ( result ) /*0x74fe5c*/
    {
      InterlockedIncrement(result + 1); /*0x74fe67*/
      v7 = (NiObject *)FormHeapAlloc(0x18u); /*0x74fe6f*/
      if ( v7 ) /*0x74fe79*/
        v8 = (Ni2DBuffer **)sub_6D2990(v7, 0); /*0x74fe83*/
      else
        v8 = 0; /*0x74fe87*/
      sub_6DE010(v8, v6[3], v6[2], v6[4]); /*0x74fe97*/
      v6[2] = 0; /*0x74fe9c*/
      v6[3] = 0; /*0x74fe9f*/
      v6[4] = 0; /*0x74fea2*/
      *((_BYTE *)v6 + 0x14) = 0; /*0x74fea5*/
      (*(void (__thiscall **)(int, Ni2DBuffer **, _DWORD, int, int))(*(_DWORD *)a1 + 0x84))(a1, v8, 0, a3, a2); /*0x74feb4*/
      v9 = (NiObject *)FormHeapAlloc(0x18u); /*0x74feb8*/
      if ( v9 ) /*0x74fec2*/
        v10 = (NiBoolData *)sub_6E7F50(v9, 0); /*0x74fecc*/
      else
        v10 = 0; /*0x74fed0*/
      NiBoolData::NiBoolData(v10, v6[7], v6[8], v6[6]); /*0x74fee0*/
      v6[6] = 0; /*0x74fee5*/
      v6[7] = 0; /*0x74fee8*/
      *((_BYTE *)v6 + 0x24) = 0; /*0x74feeb*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x84))(a1); /*0x74fefb*/
      result = (_DWORD *)InterlockedDecrement(v6 + 1); /*0x74ff01*/
      if ( !result ) /*0x74ff0a*/
        return (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x74ff14*/
    }
  }
  return result; /*0x74ff17*/
}
