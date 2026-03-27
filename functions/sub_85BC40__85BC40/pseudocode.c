NiTimeController *__thiscall sub_85BC40(BSShaderProperty *this, int a2, int a3)
{
  NiTimeController *result; // eax

  sub_7E2490((char **)this, a2, a3);
  *(_DWORD *)(a2 + 0x6C) = *((_DWORD *)this + 0x1B);
  *(_BYTE *)(a2 + 0x70) = *((_BYTE *)this + 0x70);
  *(_BYTE *)(a2 + 0x71) = *((_BYTE *)this + 0x71);
  *(_BYTE *)(a2 + 0x72) = *((_BYTE *)this + 0x72);
  *(_DWORD *)(a2 + 0x74) = *((_DWORD *)this + 0x1D);
  result = *((NiTimeController **)this + 0x1E);
  *(_DWORD *)(a2 + 0x78) = result;
  *(float *)(a2 + 0x7C) = *((float *)this + 0x1F);
  *(float *)(a2 + 0x80) = *((float *)this + 0x20);
  *(_WORD *)(a2 + 0x84) = *((_WORD *)this + 0x42);
  return result;
}
