int __userpurge sub_61EAE0@<eax>(int a1@<ecx>, int a2@<ebx>, TESObjectREFR *a3)
{
  _DWORD *v4; // eax

  if ( a3 == (TESObjectREFR *)sub_6135F0(a1)
    && (!sub_6135F0(a1)
     || (v4 = (_DWORD *)sub_6135F0(a1), !Actor_IsSwimming(v4))
     || Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C))
     || Actor_CanFightInWater(*(void **)(a1 + 0x3C))) )
  {
    return sub_619D40(a1, a2, a3, *(_BYTE *)(a1 + 0x174) == 0, 1);
  }
  else
  {
    return sub_619D40(a1, a2, a3, 1, 1);
  }
}
