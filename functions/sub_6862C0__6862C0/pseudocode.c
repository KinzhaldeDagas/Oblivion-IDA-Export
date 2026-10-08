void __thiscall sub_6862C0(int *this, NiPoint3 *position)
{
  TravelPath_ClearNodes((TravelPath *)this); /*0x6862c4*/
  sub_684EC0((int **)this); /*0x6862cb*/
  TravelPath_AppendDestinationPosition((TravelPath *)this, position); /*0x6862d7*/
  sub_68BED0((TeleportData **)this + 5, position); /*0x6862e0*/
  if ( unk_B3C08A ) /*0x6862e5*/
    sub_685EA0(this, 0); /*0x6862f2*/
}
