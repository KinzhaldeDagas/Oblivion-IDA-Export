0x500F70: push    ecx
0x500F71: cmp     byte ptr ds:0B3BD9Ah, 0
0x500F78: mov     edx, [esp+4+l]
0x500F7C: setz    al
0x500F7F: lea     ecx, [esp+4+var_4]
0x500F82: push    ecx; UInt16
0x500F83: mov     ecx, [esp+8+arg_C]
0x500F87: push    edx; l
0x500F88: mov     edx, [esp+0Ch+a4]
0x500F8C: mov     ds:0B3BD9Ah, al
0x500F91: mov     eax, [esp+0Ch+arg_10]
0x500F95: push    eax; a6
0x500F96: mov     eax, [esp+10h+a3]
0x500F9A: push    ecx; a5
0x500F9B: mov     ecx, [esp+14h+arg_4]
0x500F9F: push    edx; a4
0x500FA0: mov     edx, [esp+18h+a1]
0x500FA4: push    eax; a3
0x500FA5: push    ecx; a2
0x500FA6: push    edx; a1
0x500FA7: mov     dword ptr [esp+24h+var_4], 0
0x500FAF: call    Script_ExtractArgs
0x500FB4: add     esp, 20h
0x500FB7: test    al, al
0x500FB9: jnz     short loc_500FBD
0x500FBB: pop     ecx
0x500FBC: retn
0x500FBD: cmp     byte ptr ds:0B361ACh, 0
0x500FC4: mov     eax, dword ptr [esp+4+var_4]
0x500FC7: mov     ds:0B3BD9Ch, eax
0x500FCC: jz      short loc_500FEF
0x500FCE: cmp     byte ptr ds:0B3BD9Ah, 0
0x500FD5: mov     eax, offset aOn_0
0x500FDA: jnz     short loc_500FE1
0x500FDC: mov     eax, offset aOff
0x500FE1: push    eax
0x500FE2: push    offset aAiDetectionSta; "AI Detection stats printing is  %s"
0x500FE7: call    Interface_ConsolePrint
0x500FEC: add     esp, 8
0x500FEF: mov     al, 1
0x500FF1: pop     ecx
0x500FF2: retn
