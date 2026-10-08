// Changes Oblivion Sky mode at +0xDC, invoking the appropriate setup/teardown path when crossing between modes 0/1 and 2/3. Fallout was consulted afterward and corroborates Sky::SetMode terminology.
void __thiscall Sky__SetMode(Sky *this, unsigned int mode)
{
  UInt32 unk0DC; // eax

  unk0DC = this->unk0DC; /*0x543bb3*/
  if ( (unk0DC < 2 || unk0DC == 4) && (mode == 3 || mode == 2) ) /*0x543bd4*/
  {
    sub_543510(this); /*0x543bf9*/
  }
  else if ( (unk0DC == 3 || unk0DC == 2) && mode <= 1 ) /*0x543be2*/
  {
    sub_542B50(this, (volatile LONG *)mode, (volatile LONG *)this); /*0x543be9*/
    this->unk0DC = mode; /*0x543bee*/
    return; /*0x543bf6*/
  }
  this->unk0DC = mode; /*0x543bfe*/
}
