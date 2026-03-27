0x50A8A0: sub     esp, 8
0x50A8A3: mov     ecx, [esp+8+l]
0x50A8A7: mov     edx, [esp+8+arg_10]
0x50A8AB: lea     eax, [esp+8+var_8]
0x50A8AE: push    eax; UInt16
0x50A8AF: mov     eax, [esp+0Ch+arg_C]
0x50A8B3: push    ecx; l
0x50A8B4: mov     ecx, [esp+10h+a4]
0x50A8B8: push    edx; a6
0x50A8B9: mov     edx, [esp+14h+a3]
0x50A8BD: push    eax; a5
0x50A8BE: mov     eax, [esp+18h+arg_4]
0x50A8C2: push    ecx; a4
0x50A8C3: mov     ecx, [esp+1Ch+a1]
0x50A8C7: push    edx; a3
0x50A8C8: push    eax; a2
0x50A8C9: push    ecx; a1
0x50A8CA: mov     dword ptr [esp+28h+var_8], 0FFFFFFFFh
0x50A8D2: call    Script_ExtractArgs
0x50A8D7: add     esp, 20h
0x50A8DA: test    al, al
0x50A8DC: jnz     short loc_50A8E2
0x50A8DE: add     esp, 8
0x50A8E1: retn
0x50A8E2: mov     ecx, dword ptr [esp+8+var_8]
0x50A8E5: cmp     ecx, 0FFFFFFFFh
0x50A8E8: jz      loc_50A97E
0x50A8EE: cmp     ecx, 5; switch 6 cases
0x50A8F1: push    esi
0x50A8F2: ja      short def_50A8F4
0x50A8F4: jmp     ds:jpt_50A8F4[ecx*4]; switch jump
0x50A8FB: mov     esi, offset aActor; jumptable 0050A8F4 case 0
0x50A900: jmp     short loc_50A923
0x50A902: mov     esi, offset aMarker_0; jumptable 0050A8F4 case 1
0x50A907: jmp     short loc_50A923
0x50A909: mov     esi, offset aLandQuad; jumptable 0050A8F4 case 2
0x50A90E: jmp     short loc_50A923
0x50A910: mov     esi, offset aWaterQuad; jumptable 0050A8F4 case 3
0x50A915: jmp     short loc_50A923
0x50A917: mov     esi, offset aStaticQuad; jumptable 0050A8F4 case 4
0x50A91C: jmp     short loc_50A923
0x50A91E: mov     esi, offset aActiveQuad; jumptable 0050A8F4 case 5
0x50A923: mov     edx, 1
0x50A928: shl     edx, cl
0x50A92A: push    ebx
0x50A92B: push    0
0x50A92D: test    ds:0B35C00h, edx
0x50A933: setnz   bl
0x50A936: mov     byte ptr [esp+14h+var_4], bl
0x50A93A: mov     eax, [esp+14h+var_4]
0x50A93E: push    eax
0x50A93F: push    ecx
0x50A940: mov     ecx, ds:0B333A0h
0x50A946: call    sub_442A30
0x50A94B: test    bl, bl
0x50A94D: pop     ebx
0x50A94E: mov     eax, offset aDisplayed; "DISPLAYED"
0x50A953: jnz     short loc_50A95A
0x50A955: mov     eax, offset aCulled; "CULLED"
0x50A95A: push    eax
0x50A95B: push    esi
0x50A95C: push    offset aCellSNodesNowS; "Cell %s nodes now %s."
0x50A961: call    Interface_ConsolePrint
0x50A966: add     esp, 0Ch
0x50A969: pop     esi
0x50A96A: mov     al, 1
0x50A96C: add     esp, 8
0x50A96F: retn
