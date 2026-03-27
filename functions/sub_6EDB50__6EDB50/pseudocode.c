_DWORD *__userpurge sub_6EDB50@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  unsigned int v4; // edx

  v4 = *(this + 5);
  if ( a4 > v4 )
    return sub_6EDAA0(this, a3, a4 - v4, 0);
  else
    return sub_4134E0(this, a2, a4, 0xFFFFFFFF);
}
