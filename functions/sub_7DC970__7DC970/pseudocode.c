int __thiscall sub_7DC970(WaterShader *this)
{
  UInt32 *Unk07C; // edi
  int v3; // ebx
  int result; // eax

  Unk07C = this->Unk07C;
  v3 = 0x10;
  do
  {
    result = ((int (__thiscall *)(WaterShader *, _DWORD))this->super.__vftable->Unk094)(this, *Unk07C++);
    --v3;
  }
  while ( v3 );
  return result;
}
