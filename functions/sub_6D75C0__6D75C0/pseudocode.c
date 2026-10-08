// Deep clone of text keys. Copies count, allocates count 0x08-byte records, copies each float time, and duplicates each owned text string; refuses the specialized copy when runtime type is not exactly NiTextKeyExtraData.
void __thiscall NiTextKeyExtraData_CopyMembers(char **this, unsigned int *a2, _DWORD **a3)
{
  unsigned int v4; // ebx
  int v5; // edi
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // edi

  sub_7214A0(this, a2, a3); /*0x6d75f0*/
  v4 = 0; /*0x6d75f8*/
  a2[3] = (unsigned int)*(this + 3); /*0x6d75fa*/
  if ( *(this + 3) && (char *)(*((int (__thiscall **)(char **))*this + 1))(this) == stru_B3DA08 )
  {
    v5 = (int)*(this + 3); /*0x6d761f*/
    v6 = (unsigned __int64)(unsigned int)v5 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v5;
    v7 = FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
    if ( v7 ) /*0x6d7653*/
    {
      v4 = v7 + 4; /*0x6d7660*/
      *(_DWORD *)v7 = v5; /*0x6d7666*/
      ArrayConstructor( /*0x6d7668*/
        (char *)(v7 + 4),
        8u,
        v5,
        (void (__thiscall *)(char *))NiTextKey_Construct,
        (void (__thiscall *)(void *))NiTextKey_Destroy);
    }
    v8 = 0; /*0x6d766d*/
    a2[4] = v4; /*0x6d766f*/
    if ( *(this + 3) ) /*0x6d7672*/
    {
      do /*0x6d76ab*/
      {
        *(float *)(8 * v8 + a2[4]) = *(float *)&(*(this + 4))[8 * v8]; /*0x6d7690*/
        sub_6EC6C0((unsigned int *)(8 * v8 + a2[4]), *(char **)&(*(this + 4))[8 * v8 + 4]); /*0x6d76a0*/
        ++v8; /*0x6d76a5*/
      }
      while ( v8 < (unsigned int)*(this + 3) ); /*0x6d76ab*/
    }
  }
  else
  {
    a2[4] = 0; /*0x6d76af*/
  }
}
