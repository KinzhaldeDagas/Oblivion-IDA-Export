0x8C82D0: push    0FFFFFFFFh
0x8C82D2: push    offset SEH_8C82D0
0x8C82D7: mov     eax, large fs:0
0x8C82DD: push    eax
0x8C82DE: push    ecx
0x8C82DF: push    esi
0x8C82E0: push    edi
0x8C82E1: mov     eax, ds:0B30AACh
0x8C82E6: xor     eax, esp
0x8C82E8: push    eax
0x8C82E9: lea     eax, [esp+1Ch+var_C]
0x8C82ED: mov     large fs:0, eax
0x8C82F3: mov     edi, ecx
0x8C82F5: mov     ecx, ds:0BA7D98h
0x8C82FB: mov     eax, [ecx]
0x8C82FD: mov     edx, [eax+10h]
0x8C8300: push    24h ; '$'
0x8C8302: push    60h ; '`'
0x8C8304: call    edx
0x8C8306: mov     word ptr [eax+4], 60h ; '`'
0x8C830C: mov     [esp+1Ch+var_10], eax
0x8C8310: fld     dword ptr ds:0B2FFE4h
0x8C8316: mov     ecx, [esp+1Ch+arg_4]
0x8C831A: mov     edx, [esp+1Ch+arg_0]
0x8C831E: sub     esp, 8
0x8C8321: fstp    [esp+24h+var_20]; int
0x8C8325: mov     [esp+24h+var_4], 0
0x8C832D: fld     [esp+24h+arg_8]
0x8C8331: fstp    [esp+24h+var_24]; float
0x8C8334: push    ecx; int
0x8C8335: push    edx; int
0x8C8336: mov     ecx, eax
0x8C8338: call    sub_8F3230
0x8C833D: mov     esi, eax
0x8C833F: mov     eax, [edi]
0x8C8341: mov     edx, [eax+4Ch]
0x8C8344: push    esi
0x8C8345: mov     ecx, edi
0x8C8347: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8C834F: call    edx
0x8C8351: cmp     word ptr [esi+4], 0
0x8C8356: jz      short loc_8C8370
0x8C8358: add     word ptr [esi+6], 0FFFFh
0x8C835D: movzx   eax, word ptr [esi+6]
0x8C8361: test    ax, ax
0x8C8364: jnz     short loc_8C8370
0x8C8366: mov     eax, [esi]
0x8C8368: mov     edx, [eax]
0x8C836A: push    1
0x8C836C: mov     ecx, esi
0x8C836E: call    edx
0x8C8370: mov     ecx, [esp+1Ch+var_C]
0x8C8374: mov     large fs:0, ecx
0x8C837B: pop     ecx
0x8C837C: pop     edi
0x8C837D: pop     esi
0x8C837E: add     esp, 10h
0x8C8381: retn    0Ch
