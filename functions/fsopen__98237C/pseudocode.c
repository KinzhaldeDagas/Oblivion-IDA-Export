FILE *__cdecl _fsopen(const char *Filename, const char *Mode, int ShFlag)
{
  int v3; // ebp
  const char *v4; // esi
  _RTL_CRITICAL_SECTION_0 *v6; // eax
  int v8; // [esp+0h] [ebp-2Ch]
  int v9; // [esp+4h] [ebp-28h]
  int v10; // [esp+8h] [ebp-24h]
  int v11; // [esp+Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h] BYREF
  _RTL_CRITICAL_SECTION_0 *Filenamea; // [esp+34h] [ebp+8h]

  if ( !Filename || (v4 = Mode) == 0 || !*Mode ) /*0x9823c7*/
  {
    *_errno() = 0x16; /*0x9823a0*/
    _invalid_parameter(0, (int)Filename, (int)v4); /*0x9823ab*/
LABEL_11:
    JUMPOUT(0x982430); /*0x982430*/
  }
  v6 = (_RTL_CRITICAL_SECTION_0 *)_getstream(); /*0x9823d0*/
  Filenamea = v6; /*0x9823d5*/
  if ( !v6 ) /*0x9823da*/
  {
    *_errno() = 0x18; /*0x9823e1*/
    goto LABEL_11; /*0x9823e7*/
  }
  ms_exc.registration.TryLevel = 0; /*0x9823e9*/
  if ( !*Filename ) /*0x9823ec*/
  {
    *_errno() = 0x16; /*0x9823f5*/
    _local_unwind4( /*0x982406*/
      (int)&__security_cookie,
      (int)&ms_exc.registration,
      0xFFFFFFFE,
      v8,
      v9,
      v10,
      v11,
      0,
      ms_exc.old_esp,
      (int)ms_exc.exc_ptr,
      (int)ms_exc.registration.Next,
      (int)ms_exc.registration.ExceptionHandler,
      (int)ms_exc.registration.ScopeTable);
    goto LABEL_11; /*0x98240e*/
  }
  _openfile((int)Filename, Filename, (char *)Mode, ShFlag, v6); /*0x982416*/
  ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x982421*/
  _unlock_file(Filenamea); /*0x982439*/
  return (FILE *)_fsopen_::_LN13_2(v3);
}
