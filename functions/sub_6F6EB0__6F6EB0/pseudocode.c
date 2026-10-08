void __thiscall sub_6F6EB0(int ***this)
{
  *(int ***)((char *)this + (_DWORD)(*this)[1]) = (int **)&std::ostream::`vftable'{for `std::_Iosb<int>'}; /*0x6f6eb9*/
  *(this + 1) = (int **)&std::ios_base::`vftable'; /*0x6f6ec2*/
  std::ios_base::_Ios_base_dtor(this + 1); /*0x6f6ec8*/
}
