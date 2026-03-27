_DWORD *__usercall sub_6F5FA0@<eax>(FILE **this@<ecx>, int a2@<edi>)
{
  _DWORD *result; // eax
  rsize_t v4; // [esp-4h] [ebp-8h]

  if ( *(this + 0xF) )
    fclose(*(this + 0xF));
  LODWORD(v4) = 0;
  result = sub_414500(this + 1, a2, EmptyString, v4);
  *(this + 0xF) = 0;
  return result;
}
