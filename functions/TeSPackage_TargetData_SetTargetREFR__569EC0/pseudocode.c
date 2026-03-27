int __thiscall TeSPackage_TargetData_SetTargetREFR(_DWORD *this, int a2)
{
  int result; // eax

  if ( !*(_BYTE *)this )
  {
    *(this + 1) = a2;
    return a2;
  }
  return result;
}
