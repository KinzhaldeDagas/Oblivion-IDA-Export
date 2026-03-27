void __userpurge Actor_MagicCaster_IsMagicItemUseable_::CheckSilence(char a1@<zf>, int a2, int a3, int a4, int a5)
{
  if ( !a1 && !BYTE2(a4) )
    JUMPOUT(0x5F47B1);
  Actor_MagicCaster_IsMagicItemUseable_::Return_0(a2, a3, a4, a5);
}
