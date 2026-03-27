int __usercall MagicCaster_ApplyActiveMagicItem_::TargetVFX_@<eax>(
        unsigned int a1@<ebx>,
        unsigned int a2@<ebp>,
        _DWORD *a3@<esi>,
        double a4@<st0>,
        double a5@<st1>,
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
        int a31,
        int a32,
        int a33,
        int a34,
        int a35)
{
  int v36; // eax
  __int128 v38; // [esp-10h] [ebp-14h]
  float v39; // [esp+0h] [ebp-4h]

  if ( a13 )
  {
    if ( (*(unsigned __int8 (__usercall **)@<al>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a13 + 0x190))(
           a13,
           a4,
           a5) )
    {
      if ( a20 )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(a20 + 0x1C) + 0x58) & 0x20000000) != 0 )
        {
          v36 = (*(int (__thiscall **)(_DWORD *))(*a3 + 0x30))(a3);
          if ( sub_699EB0((MagicCaster *)a3, a13 + 0x68, v36) )
          {
            EffectItem_MagickaCost((float *)a20);
            v39 = a4;
            *(_QWORD *)&v38 = __PAIR64__(a1, a2);
            *((_QWORD *)&v38 + 1) = __PAIR64__(a20, a30);
            sub_699900((int)a3, a1, a4, (Actor *)a13, v38, v39);
          }
        }
      }
    }
  }
  return MagicCaster_ApplyActiveMagicItem_::AfterVFX(
           a3,
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
           a31,
           a32,
           a33,
           a34,
           a35);
}
