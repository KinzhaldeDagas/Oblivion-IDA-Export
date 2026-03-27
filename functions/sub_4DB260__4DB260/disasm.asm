0x4DB260: push    0FFFFFFFFh
0x4DB262: push    offset SEH_4DB260
0x4DB267: mov     eax, large fs:0
0x4DB26D: push    eax
0x4DB26E: mov     eax, ds:0B30AACh
0x4DB273: xor     eax, esp
0x4DB275: push    eax
0x4DB276: lea     eax, [esp+10h+var_C]
0x4DB27A: mov     large fs:0, eax
0x4DB280: movzx   ecx, byte ptr [esp+10h+arg_0]
0x4DB285: xor     eax, eax
0x4DB287: sub     ecx, 31h ; '1'
0x4DB28A: jz      loc_4DB314
0x4DB290: sub     ecx, 1
0x4DB293: jz      short loc_4DB2DB
0x4DB295: sub     ecx, 1
0x4DB298: jnz     loc_4DB347
0x4DB29E: push    108h; Size
0x4DB2A3: call    FormHeapAlloc
0x4DB2A8: add     esp, 4
0x4DB2AB: mov     [esp+10h+arg_0], eax
0x4DB2AF: test    eax, eax
0x4DB2B1: mov     [esp+10h+var_4], 2
0x4DB2B9: jz      loc_4DB345
0x4DB2BF: mov     ecx, [esp+10h+arg_4]
0x4DB2C3: push    ecx
0x4DB2C4: mov     ecx, eax
0x4DB2C6: call    sub_625100
0x4DB2CB: mov     ecx, [esp+10h+var_C]
0x4DB2CF: mov     large fs:0, ecx
0x4DB2D6: pop     ecx
0x4DB2D7: add     esp, 0Ch
0x4DB2DA: retn
0x4DB2DB: push    10Ch; Size
0x4DB2E0: call    FormHeapAlloc
0x4DB2E5: add     esp, 4
0x4DB2E8: mov     [esp+10h+arg_0], eax
0x4DB2EC: test    eax, eax
0x4DB2EE: mov     [esp+10h+var_4], 1
0x4DB2F6: jz      short loc_4DB345
0x4DB2F8: mov     edx, [esp+10h+arg_4]
0x4DB2FC: push    edx
0x4DB2FD: mov     ecx, eax
0x4DB2FF: call    sub_60E540
0x4DB304: mov     ecx, [esp+10h+var_C]
0x4DB308: mov     large fs:0, ecx
0x4DB30F: pop     ecx
0x4DB310: add     esp, 0Ch
0x4DB313: retn
0x4DB314: push    58h ; 'X'; Size
0x4DB316: call    FormHeapAlloc
0x4DB31B: add     esp, 4
0x4DB31E: mov     [esp+10h+arg_0], eax
0x4DB322: test    eax, eax
0x4DB324: mov     [esp+10h+var_4], 0
0x4DB32C: jz      short loc_4DB345
0x4DB32E: mov     ecx, eax
0x4DB330: call    TESObjectREFR_constr
0x4DB335: mov     ecx, [esp+10h+var_C]
0x4DB339: mov     large fs:0, ecx
0x4DB340: pop     ecx
0x4DB341: add     esp, 0Ch
0x4DB344: retn
0x4DB345: xor     eax, eax
0x4DB347: mov     ecx, [esp+10h+var_C]
0x4DB34B: mov     large fs:0, ecx
0x4DB352: pop     ecx
0x4DB353: add     esp, 0Ch
0x4DB356: retn
