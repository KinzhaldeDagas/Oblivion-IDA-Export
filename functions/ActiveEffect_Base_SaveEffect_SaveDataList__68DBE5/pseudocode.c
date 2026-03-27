int __userpurge ActiveEffect_Base_SaveEffect_::SaveDataList@<eax>(
        int a1@<ebp>,
        _DWORD *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _BYTE *a9,
        int a10,
        int a11,
        char a12)
{
  _DWORD *v12; // esi

  v12 = *(_DWORD **)(a1 + 0x34);
  if ( v12 == a2 )
    return ActiveEffect_Base_SaveEffect_::DoneDataList(a3, a4, a5, a6, a7, a8, a9);
  else
    return ActiveEffect_Base_SaveEffect_::LoopTest(a11, a1, v12, a3, a4, a5, a6, a7, a8, (int)a9, a10, a11, a12);
}
