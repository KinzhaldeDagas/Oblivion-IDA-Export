char __cdecl sub_4F7C00(Actor *a1, int a2, int a3, double *a4)
{
  LowProcess *process; // ebx
  UInt32 procedureArrayIndex; // edi
  double v6; // st7

  *a4 = 0.0; /*0x4f7c07*/
  if ( a1 ) /*0x4f7c10*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f7c20*/
    {
      if ( a1->members.super.process ) /*0x4f7c2a*/
      {
        if ( Actor::GetCurrentPackage(a1) ) /*0x4f7c36*/
        {
          process = a1->members.super.process; /*0x4f7c44*/
          procedureArrayIndex = Actor::GetCurrentPackage(a1)->members.procedureArrayIndex; /*0x4f7c4e*/
          switch ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) /*0x4f7c71*/
                             + 4 * process->GetCurrentPackProcedure(process)) )
          {
            case 0: /*0x4f7c71*/
              v6 = 0.0; /*0x4f7c78*/
              break; /*0x4f7c7a*/
            case 1: /*0x4f7c71*/
              v6 = dbl_A49318; /*0x4f7cbd*/
              break; /*0x4f7cc3*/
            case 2: /*0x4f7c71*/
              v6 = 1.0; /*0x4f7c7f*/
              break; /*0x4f7c81*/
            case 3: /*0x4f7c71*/
              v6 = dbl_A3D0C0; /*0x4f7c86*/
              break; /*0x4f7c8c*/
            case 4: /*0x4f7c71*/
              v6 = dbl_A49310; /*0x4f7cc8*/
              break; /*0x4f7cce*/
            case 5: /*0x4f7c71*/
              v6 = dbl_A3F3E8; /*0x4f7cde*/
              break; /*0x4f7ce4*/
            case 6: /*0x4f7c71*/
              v6 = dbl_A49308; /*0x4f7ce9*/
              break; /*0x4f7cef*/
            case 7: /*0x4f7c71*/
              v6 = dbl_A2F910; /*0x4f7cf4*/
              break; /*0x4f7cfa*/
            case 8: /*0x4f7c71*/
              v6 = dbl_A492F8; /*0x4f7d0a*/
              break; /*0x4f7d10*/
            case 9: /*0x4f7c71*/
              v6 = dbl_A49300; /*0x4f7cff*/
              break; /*0x4f7d05*/
            case 0xA: /*0x4f7c71*/
              v6 = dbl_A492E8; /*0x4f7d20*/
              break; /*0x4f7d26*/
            case 0xB: /*0x4f7c71*/
              v6 = dbl_A492D8; /*0x4f7d36*/
              break; /*0x4f7d3c*/
            case 0xC: /*0x4f7c71*/
              v6 = dbl_A3C800; /*0x4f7c9c*/
              break; /*0x4f7ca2*/
            case 0xD: /*0x4f7c71*/
              v6 = dbl_A30E48; /*0x4f7c91*/
              break; /*0x4f7c97*/
            case 0xE: /*0x4f7c71*/
              v6 = dbl_A492D0; /*0x4f7d41*/
              break; /*0x4f7d47*/
            case 0xF: /*0x4f7c71*/
              v6 = dbl_A492F0; /*0x4f7d15*/
              break; /*0x4f7d1b*/
            case 0x10: /*0x4f7c71*/
              v6 = dbl_A3F3F0; /*0x4f7ca7*/
              break; /*0x4f7cad*/
            case 0x11: /*0x4f7c71*/
              v6 = dbl_A46E48; /*0x4f7d4c*/
              break; /*0x4f7d52*/
            case 0x12: /*0x4f7c71*/
              v6 = dbl_A45EB0; /*0x4f7cd3*/
              break; /*0x4f7cd9*/
            case 0x14: /*0x4f7c71*/
              v6 = dbl_A3F3A0; /*0x4f7cb2*/
              break; /*0x4f7cb8*/
            case 0x16: /*0x4f7c71*/
              v6 = dbl_A492C8; /*0x4f7d57*/
              break; /*0x4f7d5d*/
            case 0x17: /*0x4f7c71*/
              v6 = dbl_A492C0; /*0x4f7d62*/
              break; /*0x4f7d68*/
            case 0x18: /*0x4f7c71*/
              v6 = dbl_A492B8; /*0x4f7d6d*/
              break; /*0x4f7d73*/
            case 0x19: /*0x4f7c71*/
              v6 = dbl_A2F920; /*0x4f7d78*/
              break; /*0x4f7d7e*/
            case 0x1A: /*0x4f7c71*/
              v6 = dbl_A492B0; /*0x4f7d83*/
              break; /*0x4f7d89*/
            case 0x1B: /*0x4f7c71*/
              v6 = dbl_A492A8; /*0x4f7d8b*/
              break; /*0x4f7d91*/
            case 0x1D: /*0x4f7c71*/
              v6 = dbl_A492A0; /*0x4f7d93*/
              break; /*0x4f7d99*/
            case 0x1E: /*0x4f7c71*/
              v6 = dbl_A49298; /*0x4f7d9b*/
              break; /*0x4f7da1*/
            case 0x1F: /*0x4f7c71*/
              v6 = dbl_A49290; /*0x4f7da3*/
              break; /*0x4f7da9*/
            case 0x20: /*0x4f7c71*/
              v6 = dbl_A3AA50; /*0x4f7dab*/
              break; /*0x4f7db1*/
            case 0x21: /*0x4f7c71*/
              v6 = dbl_A49288; /*0x4f7db3*/
              break; /*0x4f7db9*/
            case 0x22: /*0x4f7c71*/
              v6 = dbl_A46970; /*0x4f7dbb*/
              break; /*0x4f7dc1*/
            case 0x23: /*0x4f7c71*/
              v6 = dbl_A49398; /*0x4f7dc3*/
              break; /*0x4f7dc9*/
            case 0x24: /*0x4f7c71*/
              v6 = dbl_A49390; /*0x4f7dcb*/
              break; /*0x4f7dd1*/
            case 0x25: /*0x4f7c71*/
              v6 = dbl_A49388; /*0x4f7dd3*/
              break; /*0x4f7dd9*/
            case 0x26: /*0x4f7c71*/
              v6 = dbl_A49380; /*0x4f7ddb*/
              break; /*0x4f7de1*/
            case 0x27: /*0x4f7c71*/
              v6 = dbl_A49378; /*0x4f7de3*/
              break; /*0x4f7de9*/
            case 0x28: /*0x4f7c71*/
              v6 = dbl_A49370; /*0x4f7deb*/
              break; /*0x4f7df1*/
            case 0x29: /*0x4f7c71*/
              v6 = dbl_A49368; /*0x4f7df3*/
              break; /*0x4f7df9*/
            case 0x2A: /*0x4f7c71*/
              v6 = dbl_A49360; /*0x4f7dfb*/
              break; /*0x4f7e01*/
            case 0x2C: /*0x4f7c71*/
              v6 = dbl_A492E0; /*0x4f7d2b*/
              break; /*0x4f7d31*/
            default:
              v6 = dbl_A3D360; /*0x4f7e03*/
              break; /*0x4f7e03*/
          }
          *a4 = v6; /*0x4f7e09*/
        }
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7e0b*/
    Interface_ConsolePrint("Procedure >> %0.2f", *a4); /*0x4f7e21*/
  return 1; /*0x4f7e29*/
}
