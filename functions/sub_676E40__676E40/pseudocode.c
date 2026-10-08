void __thiscall sub_676E40(int *this)
{
  int *v1; // ebp

  v1 = this + 0x14; /*0x676e45*/
  if ( !*(this + 0x15) && !*v1 ) /*0x676e4e*/
    JUMPOUT(0x676ED9); /*0x676ed9*/
  if ( this == (int *)0xFFFFFFB0 ) /*0x676e5c*/
    JUMPOUT(0x676ED7); /*0x676ed7*/
  if ( *(this + 0x15) ) /*0x676e60*/
    JUMPOUT(0x676E6B); /*0x676e6b*/
  sub_676E69(*v1 == 0, (int)(this + 0x14), v1, (int)(this + 0x14)); /*0x676e67*/
}
