char __thiscall sub_812EF0(float *this, int a2)
{
  char result; // al
  float v3[3]; // [esp+0h] [ebp-84h] BYREF
  float v4[3]; // [esp+Ch] [ebp-78h] BYREF
  float v5[3]; // [esp+18h] [ebp-6Ch] BYREF
  float v6[3]; // [esp+24h] [ebp-60h] BYREF
  float v7[3]; // [esp+30h] [ebp-54h] BYREF
  float v8[3]; // [esp+3Ch] [ebp-48h] BYREF
  float v9[3]; // [esp+48h] [ebp-3Ch] BYREF
  float v10[3]; // [esp+54h] [ebp-30h] BYREF
  float v11[3]; // [esp+60h] [ebp-24h] BYREF
  float v12[3]; // [esp+6Ch] [ebp-18h] BYREF
  float v13[3]; // [esp+78h] [ebp-Ch] BYREF

  switch ( a2 )
  {
    case 0:
      v4[0] = -*(float *)&dword_B258DC;
      v4[1] = -*(float *)&qword_B258E0;
      v4[2] = -*((float *)&qword_B258E0 + 1);
      v12[0] = *(this + 0x22) - *(float *)&dword_B258D0;
      v12[1] = *(this + 0x23) - *(float *)&dword_B258D4;
      v12[2] = *(this + 0x24) - *(float *)&dword_B258D8;
      result = sub_70C340(this, v12, v4);
      break;
    case 1:
      v6[0] = -*(float *)&dword_B258DC;
      v6[1] = -*(float *)&qword_B258E0;
      v6[2] = -*((float *)&qword_B258E0 + 1);
      v10[0] = *(float *)&dword_B258D0 + *(this + 0x22);
      v10[1] = *(this + 0x23) + *(float *)&dword_B258D4;
      v10[2] = *(this + 0x24) + *(float *)&dword_B258D8;
      result = sub_70C340(this, v10, v6);
      break;
    case 2:
      v8[0] = *(this + 0x22) - *(float *)&dword_B258DC;
      v8[1] = *(this + 0x23) - *(float *)&qword_B258E0;
      v8[2] = *(this + 0x24) - *((float *)&qword_B258E0 + 1);
      result = sub_70C340(this, v8, (float *)&dword_B258E8);
      break;
    case 3:
      v3[0] = -*(float *)&dword_B258E8;
      v3[1] = -*(float *)&dword_B258EC;
      v3[2] = -*(float *)&dword_B258F0;
      v5[0] = *(this + 0x22) + *(float *)&dword_B258DC;
      v5[1] = *(this + 0x23) + *(float *)&qword_B258E0;
      v5[2] = *(this + 0x24) + *((float *)&qword_B258E0 + 1);
      result = sub_70C340(this, v5, v3);
      break;
    case 4:
      v7[0] = -*(float *)&dword_B258DC;
      v7[1] = -*(float *)&qword_B258E0;
      v7[2] = -*((float *)&qword_B258E0 + 1);
      v9[0] = *(this + 0x22) - *(float *)&dword_B258E8;
      v9[1] = *(this + 0x23) - *(float *)&dword_B258EC;
      v9[2] = *(this + 0x24) - *(float *)&dword_B258F0;
      result = sub_70C340(this, v9, v7);
      break;
    case 5:
      v11[0] = -*(float *)&dword_B258DC;
      v11[1] = -*(float *)&qword_B258E0;
      v11[2] = -*((float *)&qword_B258E0 + 1);
      v13[0] = *(this + 0x22) + *(float *)&dword_B258E8;
      v13[1] = *(this + 0x23) + *(float *)&dword_B258EC;
      v13[2] = *(this + 0x24) + *(float *)&dword_B258F0;
      sub_70C340(this, v13, v11);
      result = def_812F03(a2);
      break;
    default:
      JUMPOUT(0x81316C);
  }
  return result;
}
