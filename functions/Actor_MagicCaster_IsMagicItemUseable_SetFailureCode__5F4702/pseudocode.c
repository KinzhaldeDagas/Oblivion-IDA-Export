// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode(
        char a1@<bl>,
        _DWORD *a2@<esi>,
        void *a3@<edi>,
        double a4@<st0>,
        int a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14)
{
  if ( a2 ) /*0x5f4705*/
  {
    if ( BYTE2(a7) ) /*0x5f470c*/
    {
      *a2 = 2; /*0x5f470e*/
      Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType( /*0x5f4714*/
        a1,
        a3,
        a2,
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
        a14);
    }
    else if ( BYTE1(a7) ) /*0x5f471b*/
    {
      *a2 = 6; /*0x5f471d*/
      Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType( /*0x5f4723*/
        a1,
        a3,
        a2,
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
        a14);
    }
    else if ( (_BYTE)a11 ) /*0x5f472a*/
    {
      if ( HIBYTE(a7) ) /*0x5f4739*/
      {
        if ( a1 ) /*0x5f4745*/
        {
          *a2 = 5; /*0x5f4747*/
          Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType( /*0x5f4748*/
            a1,
            a3,
            a2,
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
            a14);
        }
        else
        {
          Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType( /*0x5f4745*/
            0,
            a3,
            a2,
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
            a14);
        }
      }
      else
      {
        *a2 = 3; /*0x5f473b*/
        Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType( /*0x5f4741*/
          a1,
          a3,
          a2,
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
          a14);
      }
    }
    else
    {
      *a2 = 1; /*0x5f472c*/
      Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType( /*0x5f4732*/
        a1,
        a3,
        a2,
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
        a14);
    }
  }
  else
  {
    Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType( /*0x5f4705*/
      a1,
      a3,
      0,
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
      a14);
  }
}
