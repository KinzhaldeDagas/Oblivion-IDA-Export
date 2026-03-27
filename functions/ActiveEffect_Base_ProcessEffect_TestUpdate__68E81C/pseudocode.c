int __usercall ActiveEffect_Base_ProcessEffect_::TestUpdate@<eax>(
        int _ESI@<esi>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  if ( *(_BYTE *)(_ESI + 0x11) || *(_BYTE *)(_ESI + 0x12) )
    return ActiveEffect_Base_ProcessEffect_::TestTerminate_();
  else
    return ActiveEffect_Base_ProcessEffect_::UpdateTimeElapsed(_ESI, bp0, a3, a4, a5);
}
