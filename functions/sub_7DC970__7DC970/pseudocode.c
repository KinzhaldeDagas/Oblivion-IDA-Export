int __thiscall sub_7DC970(WaterShader *this)
{
  UInt32 *Unk07C; // edi
  int v3; // ebx
  int result; // eax

  Unk07C = this->Unk07C; /*0x7dc975*/
  v3 = 0x10; /*0x7dc978*/
  do /*0x7dc995*/
  {
    result = ((int (__thiscall *)(WaterShader *, _DWORD))this->super.__vftable->Unk094)(this, *Unk07C++); /*0x7dc98d*/
    --v3; /*0x7dc992*/
  }
  while ( v3 ); /*0x7dc995*/
  return result; /*0x7dc997*/
}
