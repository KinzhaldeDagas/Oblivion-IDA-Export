HavokFileStreambufWriter *__stdcall sub_534340(const char *a1)
{
  HavokFileStreambufWriter *v1; // eax

  v1 = (HavokFileStreambufWriter *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x534370*/
                                     unk_BA7D98,
                                     0x10,
                                     0x17);
  *((_WORD *)v1 + 2) = 0x10; /*0x534372*/
  return HavokFileStreambufWriter::HavokFileStreambufWriter(v1, a1); /*0x534390*/
}
