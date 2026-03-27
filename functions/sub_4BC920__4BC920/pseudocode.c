double __usercall sub_4BC920@<st0>(double result@<st0>, float **a2)
{
  float **v2; // esi
  float *v3; // ebp
  NiAVObject *v4; // ebx
  float *v5; // eax
  float v6; // [esp+14h] [ebp-28h]
  float v7[9]; // [esp+18h] [ebp-24h] BYREF

  v2 = a2;
  if ( a2 )
  {
    while ( v2[1] || *v2 )
    {
      v3 = *v2;
      if ( ((_DWORD)(*v2)[2] & 0x20) == 0
        && *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)v3 + 0x170))(*v2) + 4) == 0x29 )
      {
        v4 = sub_4BC7D0((int)v3);
        if ( v4 )
        {
          v5 = (float *)(*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>))(*(_DWORD *)v3 + 0x174))(v3, result);
          v4->members.m_localTransform.pos.x = *v5;
          v4->members.m_localTransform.pos.y = v5[1];
          v4->members.m_localTransform.pos.z = v5[2];
          qmemcpy(&v4->members.m_localTransform, sub_4D7AF0(v3, v7), 0x24u);
          v6 = fabs(((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)v3 + 0xEC))(v3));
          v4->members.m_localTransform.scale = v6;
          result = flt_A3D8F0;
          sub_440E60(TES, (int)v4, flt_A3D8F0);
          v2 = a2;
        }
      }
      a2 = (float **)v2[1];
      if ( !a2 )
        break;
      v2 = (float **)v2[1];
    }
  }
  return result;
}
