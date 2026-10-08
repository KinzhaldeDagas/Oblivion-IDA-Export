// Iterates the controller manager sequence array, filters to BSAnimGroupSequence RTTI, and returns the first active sequence or the next active sequence after the supplied pointer.
BSAnimGroupSequence *__thiscall ActorAnimData_FindNextActiveAnimGroupSequence(
        ActorAnimData *this,
        BSAnimGroupSequence *after)
{
  bool v3; // bl
  NiControllerManager *manager; // eax
  unsigned int i; // edi
  int v6; // esi
  BSAnimGroupSequence *result; // eax
  int v8; // eax
  char v9; // al

  v3 = after == 0; /*0x47269f*/
  manager = this->manager; /*0x4726a1*/
  for ( i = 0; i < *((unsigned __int16 *)manager + 0x23); ++i )
  {
    v6 = *(_DWORD *)(*((_DWORD *)manager + 0x10) + 4 * i); /*0x4726b3*/
    result = 0; /*0x4726b6*/
    if ( v6 )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6); /*0x4726c3*/
      if ( v8 ) /*0x4726c7*/
      {
        while ( (char *)v8 != &MEMORY[0xB33E90][0x13E0] ) /*0x4726d5*/
        {
          v8 = *(_DWORD *)(v8 + 4); /*0x4726d7*/
          if ( !v8 ) /*0x4726dc*/
            goto LABEL_6; /*0x4726dc*/
        }
        v9 = 1; /*0x4726f4*/
      }
      else
      {
LABEL_6:
        v9 = 0; /*0x4726de*/
      }
      result = v9 != 0 ? (BSAnimGroupSequence *)v6 : 0;
    }
    if ( v3 ) /*0x4726e8*/
    {
      if ( result && *((_DWORD *)result + 0x11) ) /*0x4726fc*/
        return result; /*0x472700*/
    }
    else
    {
      v3 = result == after; /*0x4726f0*/
    }
    manager = this->manager; /*0x472702*/
  }
  return 0; /*0x472715*/
}
