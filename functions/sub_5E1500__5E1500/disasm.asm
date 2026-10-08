0x5E1500: push    ebp; TES4 authoritative: reads proxy position via 0x891440 and converts Havok units back to TES/world units via 0x43F3E0.
0x5E1501: mov     ebp, esp
0x5E1503: and     esp, 0FFFFFFF0h
0x5E1506: sub     esp, 2Ch
0x5E1509: mov     eax, ds:0B30AACh
0x5E150E: xor     eax, esp
0x5E1510: mov     [esp+2Ch+var_4], eax
0x5E1514: push    esi
0x5E1515: mov     esi, [ebp+arg_0]
0x5E1518: lea     eax, [esp+30h+var_20]
0x5E151C: push    eax
0x5E151D: call    bhkCharacterController_ReadRelativePosition; TES4 authoritative: reads current proxy position. Gets collision object transform at 0x8AC070, subtracts metadata/world transform basis offset, returns Havok-unit position.
0x5E1522: lea     ecx, [esp+30h+var_20]
0x5E1526: push    ecx
0x5E1527: push    esi
0x5E1528: call    HavokVector_ToWorldVector; TES4 authoritative: converts Havok-unit vector to TES/world units using dbl_A372E0 (inverse hkFactor).
0x5E152D: mov     ecx, [esp+38h+var_4]
0x5E1531: add     esp, 8
0x5E1534: pop     esi
0x5E1535: xor     ecx, esp
0x5E1537: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5E153C: mov     esp, ebp
0x5E153E: pop     ebp
0x5E153F: retn    4
