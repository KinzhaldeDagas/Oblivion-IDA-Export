int __userpurge sub_794340@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        float *a4@<edi>,
        int a5@<esi>,
        unsigned int *a6)
{
  int result; // eax
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  rsize_t v11; // [esp-4h] [ebp-68h]
  _DWORD v12[4]; // [esp+4h] [ebp-60h] BYREF
  int v13; // [esp+14h] [ebp-50h] BYREF
  char v14; // [esp+18h] [ebp-4Ch]
  int v15; // [esp+28h] [ebp-3Ch]
  int v16; // [esp+2Ch] [ebp-38h]
  _BYTE v17[40]; // [esp+30h] [ebp-34h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+58h] [ebp-Ch]
  void *v19; // [esp+5Ch] [ebp-8h]
  unsigned int v20; // [esp+60h] [ebp-4h]

  v20 = 0xFFFFFFFF;
  v19 = &SEH_794340;
  ExceptionList = NtCurrentTeb()->Tib.ExceptionList;
  v12[3] = a2;
  v12[2] = a3;
  v12[1] = a5;
  v12[0] = a4;
  HIDWORD(v11) = (unsigned int)v12 ^ __security_cookie;
  result = sub_78EB40(a6);
  do
  {
    switch ( result )
    {
      case 0x1F42:
        *(_DWORD *)a1 = sub_78EB40(a6);
        break;
      case 0x1F43:
        a4 = (float *)(a1 + 4);
        v8 = 0xD;
        do
        {
          *a4++ = sub_78EB10(a6);
          --v8;
        }
        while ( v8 );
        break;
      case 0x1F44:
        *(_DWORD *)(a1 + 0x38) = sub_78EB40(a6);
        break;
      case 0x1F45:
        a4 = (float *)(a1 + 0x3C);
        v9 = 0xD;
        do
        {
          *a4++ = sub_78EB10(a6);
          --v9;
        }
        while ( v9 );
        break;
      case 0x1F46:
        *(float *)(a1 + 0x70) = sub_78EB10(a6);
        break;
      case 0x1F47:
        *(_DWORD *)(a1 + 0x74) = sub_78EB40(a6);
        break;
      case 0x1F48:
        *(_DWORD *)(a1 + 0x78) = sub_78EB40(a6);
        break;
      case 0x1F49:
        a4 = (float *)(a1 + 0x7C);
        v10 = 0xD;
        do
        {
          *a4++ = sub_78EB10(a6);
          --v10;
        }
        while ( v10 );
        break;
      default:
        LODWORD(v11) = 0x1E;
        v16 = 0xF;
        v15 = 0;
        v14 = 0;
        sub_414500(&v13, (int)a4, "malformed lighting information", v11);
        v20 = 0;
        sub_789190((std::exception *)v17, &v13, 0);
        ThrowException__((int)v17, &_TI3_AVIdvFileError__);
    }
    result = sub_78EB40(a6);
  }
  while ( result != 0x1F41 );
  return result;
}
