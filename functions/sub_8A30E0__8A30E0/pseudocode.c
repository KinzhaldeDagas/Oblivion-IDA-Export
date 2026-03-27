NiObjectNET *__thiscall sub_8A30E0(_DWORD *this, NiNode *a2)
{
  NiObjectNET *result; // eax
  unsigned int *v4; // esi
  NiAVObject *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  __m128 v9; // [esp+28h] [ebp-20h] BYREF

  result = sub_89F730(this, a2);
  v4 = (unsigned int *)result;
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD *, __m128 *))(*this + 0xA4))(this, &v9);
    sub_43F3E0(v8, &v9);
    v5 = sub_6FD1D0(flt_A5977C);
    if ( v5 )
    {
      v6 = v8[1];
      v5->members.m_localTransform.pos.x = v8[0];
      v7 = v8[2];
      v5->members.m_localTransform.pos.y = v6;
      v5->members.m_localTransform.pos.z = v7;
      (*(void (__thiscall **)(unsigned int *, NiAVObject *, _DWORD))(*v4 + 0x84))(v4, v5, 0);
    }
    return (NiObjectNET *)v4;
  }
  return result;
}
