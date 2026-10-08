_DWORD *__thiscall sub_558770(_DWORD *this, char *Src)
{
  int *v3; // edi
  OB_stString28_010201A0 v5; // [esp+14h] [ebp-28h] BYREF
  int v6; // [esp+38h] [ebp-4h]

  v3 = this + 1; /*0x5587aa*/
  ArrayConstructor( /*0x5587ae*/
    (char *)this + 4,
    0x10u,
    2,
    (void (__thiscall *)(char *))FaceGenEgtBasisBank_Construct,
    (void (__thiscall *)(void *))sub_558570);
  v6 = 0; /*0x5587b9*/
  v5.capacity = 0xF; /*0x5587c1*/
  v5.size = 0; /*0x5587c9*/
  v5.storage.inlineData[0] = 0; /*0x5587d1*/
  OB_stString28_AssignBytes_010201A0(&v5, Src, strlen(Src)); /*0x5587f1*/
  LOBYTE(v6) = 1; /*0x558801*/
  sub_6F0A00(&v5, this, v3, this + 5); /*0x558806*/
  if ( v5.capacity >= 0x10 ) /*0x558813*/
    FormHeapFree((unsigned int)v5.storage.heapData); /*0x55881a*/
  return this; /*0x558824*/
}
