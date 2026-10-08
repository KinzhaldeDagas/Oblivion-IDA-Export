// Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
OB_stString28_010201A0 *__usercall OB_IdvFormatString_010201A0@<eax>(
        OB_stString28_010201A0 *result@<esi>,
        const char *format,
        ...)
{
  char buffer[1024]; // [esp+4h] [ebp-404h] BYREF
  va_list args; // [esp+410h] [ebp+8h] BYREF

  va_start(args, format);
  _vsprintf(buffer, (char *)format, args); /*0x7a54d1*/
  result->capacity = 0xF; /*0x7a54da*/
  result->size = 0; /*0x7a54e1*/
  result->storage.inlineData[0] = 0; /*0x7a54eb*/
  OB_stString28_AssignBytes_010201A0(result, buffer, strlen(buffer)); /*0x7a5505*/
  return result; /*0x7a550a*/
}
