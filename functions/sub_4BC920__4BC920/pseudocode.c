double __usercall sub_4BC920@<st0>(double result@<st0>, float **a2)
{
  float **v2; // esi
  float *v3; // ebp
  NiAVObject *v4; // ebx
  float *v5; // eax
  float v6; // [esp+14h] [ebp-28h]
  float v7[9]; // [esp+18h] [ebp-24h] BYREF

  v2 = a2; /*0x4bc924*/
  if ( a2 ) /*0x4bc92a*/
  {
    while ( v2[1] || *v2 ) /*0x4bc939*/
    {
      v3 = *v2; /*0x4bc948*/
      if ( ((_DWORD)(*v2)[2] & 0x20) == 0 /*0x4bc969*/
        && *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)v3 + 0x170))(*v2) + 4) == 0x29 )
      {
        v4 = sub_4BC7D0((int)v3); /*0x4bc971*/
        if ( v4 ) /*0x4bc978*/
        {
          v5 = (float *)(*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>))(*(_DWORD *)v3 + 0x174))(v3, result); /*0x4bc985*/
          v4->members.m_localTransform.pos.x = *v5; /*0x4bc989*/
          v4->members.m_localTransform.pos.y = v5[1]; /*0x4bc98f*/
          v4->members.m_localTransform.pos.z = v5[2]; /*0x4bc99c*/
          qmemcpy(&v4->members.m_localTransform, sub_4D7AF0(v3, v7), 0x24u); /*0x4bc9ae*/
          v6 = fabs(((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)v3 + 0xEC))(v3)); /*0x4bc9c0*/
          v4->members.m_localTransform.scale = v6; /*0x4bc9c8*/
          result = flt_A3D8F0; /*0x4bc9d1*/
          sub_440E60(MEMORY[0xB333A0], (int)v4, flt_A3D8F0); /*0x4bc9db*/
          v2 = a2; /*0x4bc9e0*/
        }
      }
      a2 = (float **)v2[1]; /*0x4bc9e9*/
      if ( !a2 ) /*0x4bc9ed*/
        break; /*0x4bc9ed*/
      v2 = (float **)v2[1]; /*0x4bc935*/
    }
  }
  return result; /*0x4bc9f6*/
}
