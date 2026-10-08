void __thiscall sub_725410(NiCamera *this)
{
  NiAVObject_UpdateWorldTransform((NiAVObject *)this); /*0x725413*/
  ++LODWORD(this->members.WorldToCam[0][3]); /*0x725418*/
}
