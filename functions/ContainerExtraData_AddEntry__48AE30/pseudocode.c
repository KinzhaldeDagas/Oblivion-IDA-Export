int __thiscall ContainerExtraData_AddEntry(float *this, int *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  *(this + 2) = flt_A30634;
  if ( a2 )
    return ContainerExtraData_AddEntry_::MarkOwnerModified(a2, 0, (int)this, (int)a2, a3, a4, a5, a6, a7, a8);
  else
    return ContainerExtraData_AddEntry_::Done(0, a3);
}
