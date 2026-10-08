void __thiscall sub_68AFB0(TravelPath *this, Actor *a2, NiPoint3 *a3)
{
  if ( a2 ) /*0x68afba*/
  {
    if ( sub_6825C0((_DWORD *)unk_B3BF80, a2) ) /*0x68afc3*/
      sub_682640((_DWORD *)unk_B3BF80, a2, a3); /*0x68afd8*/
    else
      sub_68AE20(this, a3); /*0x68afe9*/
  }
}
