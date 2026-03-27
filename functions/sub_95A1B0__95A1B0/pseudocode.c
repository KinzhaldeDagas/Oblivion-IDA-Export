void sub_95A1B0()
{
  unsigned int v0; // [esp-8h] [ebp-Ch]

  if ( byte_BA9A65 )
  {
    byte_BA9A65 = 0;
    sub_7125B0((int)"NiCollisionData");
    v0 = dword_BA9AA0;
    dword_BA9A8C = 0;
    dword_BA9A90 = 0;
    dword_BA9A9C = 0;
    dword_BA9A94 = 0;
    funcs_95DB35[0] = 0;
    dword_BA9A98 = 0;
    FormHeapFree(v0);
    FormHeapFree(dword_BA9AA4);
    FormHeapFree(dword_BA9AA8);
    FormHeapFree(dword_BA9AAC);
    dword_BA9AA0 = 0;
    dword_BA9AA4 = 0;
    dword_BA9AA8 = 0;
    dword_BA9AAC = 0;
    dword_BA9AB0 = 0;
    dword_BA9AB4 = 0;
    dword_BA9AB8 = 0;
  }
}
