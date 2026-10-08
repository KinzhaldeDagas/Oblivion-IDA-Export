// [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
void *__thiscall NiTPointerList_RemoveByData(void *list, void **data)
{
  void **v2; // eax
  void **v3; // ebx
  bool v4; // zf
  void **v5; // esi

  v2 = *((void ***)list + 1); /*0x776690*/
  v3 = data; /*0x776696*/
  if ( v2 ) /*0x77669c*/
  {
    while ( 1 ) /*0x7766a0*/
    {
      v4 = *data == v2[2]; /*0x7766a0*/
      v5 = v2; /*0x7766a6*/
      v2 = (void **)*v2; /*0x7766a8*/
      if ( v4 ) /*0x7766aa*/
        break; /*0x7766aa*/
      if ( !v2 ) /*0x7766ae*/
        goto LABEL_4; /*0x7766ae*/
    }
  }
  else
  {
LABEL_4:
    v5 = 0; /*0x7766b0*/
  }
  data = v5; /*0x7766b4*/
  if ( v5 ) /*0x7766b8*/
    return NiTPointerList_RemoveNode(list, (void **)&data); /*0x7766bf*/
  else
    return *v3; /*0x7766ca*/
}
