0x8A6460: push    esi
0x8A6461: push    edi
0x8A6462: mov     edi, [esp+8+arg_0]
0x8A6466: mov     eax, [edi]
0x8A6468: mov     esi, ecx
0x8A646A: push    esi
0x8A646B: push    2
0x8A646D: push    offset aEntity; "Entity"
0x8A6472: mov     ecx, edi
0x8A6474: call    dword ptr [eax]
0x8A6476: push    edi
0x8A6477: mov     ecx, esi
0x8A6479: call    sub_8BC870
0x8A647E: mov     eax, [esi+50h]
0x8A6481: mov     edx, [edi]
0x8A6483: push    eax
0x8A6484: push    4
0x8A6486: push    offset aMotion_0; "Motion"
0x8A648B: mov     ecx, edi
0x8A648D: call    dword ptr [edx+8]
0x8A6490: mov     eax, [esi+64h]
0x8A6493: mov     edx, [edi]
0x8A6495: push    eax
0x8A6496: push    4
0x8A6498: push    offset aDeactivator; "Deactivator"
0x8A649D: mov     ecx, edi
0x8A649F: call    dword ptr [edx+8]
0x8A64A2: mov     eax, [esi+9Ch]
0x8A64A8: test    eax, eax
0x8A64AA: js      short loc_8A64D4
0x8A64AC: mov     ecx, [esi+94h]
0x8A64B2: mov     edx, [edi]
0x8A64B4: and     eax, 3FFFFFFFh
0x8A64B9: shl     eax, 2
0x8A64BC: push    eax
0x8A64BD: mov     eax, [esi+98h]
0x8A64C3: shl     eax, 2
0x8A64C6: push    eax
0x8A64C7: push    ecx
0x8A64C8: push    4
0x8A64CA: push    offset aCollisionlistn; "CollisionListnr"
0x8A64CF: mov     ecx, edi
0x8A64D1: call    dword ptr [edx+4]
0x8A64D4: mov     eax, [esi+0A8h]
0x8A64DA: test    eax, eax
0x8A64DC: js      short loc_8A6506
0x8A64DE: mov     ecx, [esi+0A0h]
0x8A64E4: mov     edx, [edi]
0x8A64E6: and     eax, 3FFFFFFFh
0x8A64EB: shl     eax, 2
0x8A64EE: push    eax
0x8A64EF: mov     eax, [esi+0A4h]
0x8A64F5: shl     eax, 2
0x8A64F8: push    eax
0x8A64F9: push    ecx
0x8A64FA: push    4
0x8A64FC: push    offset aActlstnrptrs; "ActLstnrPtrs"
0x8A6501: mov     ecx, edi
0x8A6503: call    dword ptr [edx+4]
0x8A6506: mov     eax, [esi+0B4h]
0x8A650C: test    eax, eax
0x8A650E: js      short loc_8A6538
0x8A6510: mov     ecx, [esi+0ACh]
0x8A6516: mov     edx, [edi]
0x8A6518: and     eax, 3FFFFFFFh
0x8A651D: shl     eax, 2
0x8A6520: push    eax
0x8A6521: mov     eax, [esi+0B0h]
0x8A6527: shl     eax, 2
0x8A652A: push    eax
0x8A652B: push    ecx
0x8A652C: push    4
0x8A652E: push    offset aListenerptrs_; "ListenerPtrs."
0x8A6533: mov     ecx, edi
0x8A6535: call    dword ptr [edx+4]
0x8A6538: mov     edx, [edi]
0x8A653A: mov     ecx, edi
0x8A653C: call    dword ptr [edx+14h]
0x8A653F: pop     edi
0x8A6540: pop     esi
0x8A6541: retn    4
