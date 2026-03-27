int __userpurge MagicCaster_ApplyActiveMagicItem_::ModCasterExperience@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31)
{
  int v31; // eax
  int v32; // eax
  void (__thiscall **v33)(int, int); // edi
  int SchoolAV; // eax

  if ( (_BYTE)a6 )
  {
    if ( a7 )
    {
      v31 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x30))(a1);
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v31 + 0x18))(v31)
        || (v32 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x30))(a1),
            (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 0x18))(v32) == 5) )
      {
        v33 = (void (__thiscall **)(int, int))(*(_DWORD *)a7 + 0x39C);
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 0x30))(a1, 1, 0.0);
        SchoolAV = EffectItemList_GetSchoolAV();
        (*v33)(a7, SchoolAV);
      }
    }
  }
  return MagicCaster_ApplyActiveMagicItem_::UnkCleanup_(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31);
}
