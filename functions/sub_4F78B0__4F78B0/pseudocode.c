void __cdecl sub_4F78B0(Actor *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      if ( a1->members.super.process )
      {
        if ( sub_5E0380(a1) )
        {
          switch ( sub_5E0380(a1)->members.type )
          {
            case 0u:
            case 1u:
            case 2u:
            case 3u:
            case 4u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 9u:
            case 0xAu:
            case 0xBu:
            case 0xCu:
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x16u:
            case 0x17u:
            case 0x18u:
            case 0x19u:
            case 0x1Au:
            case 0x1Bu:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
            case 0x1Fu:
            case 0x20u:
              JUMPOUT(0x4F7A47);
            default:
              JUMPOUT(0x4F7A41);
          }
        }
      }
    }
  }
  JUMPOUT(0x4F7A49);
}
