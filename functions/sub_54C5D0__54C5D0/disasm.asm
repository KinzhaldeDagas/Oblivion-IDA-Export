0x54C5D0: push    esi
0x54C5D1: mov     esi, ecx
0x54C5D3: fld     dword ptr [esi+170h]
0x54C5D9: fld     dword ptr ds:0B3F9A8h
0x54C5DF: fucompp
0x54C5E1: fnstsw  ax
0x54C5E3: test    ah, 44h
0x54C5E6: jp      short loc_54C636
0x54C5E8: fld     dword ptr [esi+174h]
0x54C5EE: fld     dword ptr ds:0B3F9ACh
0x54C5F4: fucompp
0x54C5F6: fnstsw  ax
0x54C5F8: test    ah, 44h
0x54C5FB: jp      short loc_54C636
0x54C5FD: fld     dword ptr [esi+178h]
0x54C603: fld     dword ptr ds:0B3F9B0h
0x54C609: fucompp
0x54C60B: fnstsw  ax
0x54C60D: test    ah, 44h
0x54C610: jp      short loc_54C636
0x54C612: push    offset Vector3_InitValue?
0x54C617: lea     ecx, [esp+8+arg_0]
0x54C61B: call    sub_8AA390
0x54C620: test    al, al
0x54C622: jz      short loc_54C636
0x54C624: fldz
0x54C626: mov     dword ptr [esi+1C0h], 1
0x54C630: fstp    dword ptr [esi+1C4h]
0x54C636: fld     [esp+4+arg_0]
0x54C63A: fld     dword ptr ds:0B3F9A8h
0x54C640: fucompp
0x54C642: fnstsw  ax
0x54C644: test    ah, 44h
0x54C647: jp      short loc_54C679
0x54C649: fld     [esp+4+arg_4]
0x54C64D: fld     dword ptr ds:0B3F9ACh
0x54C653: fucompp
0x54C655: fnstsw  ax
0x54C657: test    ah, 44h
0x54C65A: jp      short loc_54C679
0x54C65C: fld     [esp+4+arg_8]
0x54C660: fld     dword ptr ds:0B3F9B0h
0x54C666: fucompp
0x54C668: fnstsw  ax
0x54C66A: test    ah, 44h
0x54C66D: jp      short loc_54C679
0x54C66F: mov     dword ptr [esi+1C0h], 0
0x54C679: mov     eax, [esp+4+arg_0]
0x54C67D: mov     ecx, [esp+4+arg_4]
0x54C681: mov     edx, [esp+4+arg_8]
0x54C685: mov     [esi+170h], eax
0x54C68B: mov     [esi+174h], ecx
0x54C691: mov     [esi+178h], edx
0x54C697: mov     byte ptr [esi+1D5h], 1
0x54C69E: pop     esi
0x54C69F: retn    10h
