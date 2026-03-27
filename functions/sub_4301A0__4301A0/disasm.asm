0x4301A0: sub     esp, 15Ch
0x4301A6: mov     eax, ___security_cookie
0x4301AB: xor     eax, esp
0x4301AD: mov     [esp+15Ch+var_4], eax
0x4301B4: mov     eax, ecx
0x4301B6: cmp     dword ptr [eax+1Ch], 0
0x4301BA: push    esi
0x4301BB: mov     esi, [esp+160h+lpLocalTime]
0x4301C2: jnz     short loc_4301D3
0x4301C4: xor     eax, eax
0x4301C6: mov     [esi], eax
0x4301C8: mov     [esi+4], eax
0x4301CB: mov     [esi+8], eax
0x4301CE: mov     [esi+0Ch], eax
0x4301D1: jmp     short loc_43021C
0x4301D3: lea     ecx, [esp+160h+FindFileData]
0x4301D7: push    ecx; lpFindFileData
0x4301D8: add     eax, 3Ch ; '<'
0x4301DB: push    eax; lpFileName
0x4301DC: call    ds:FindFirstFileA
0x4301E2: cmp     eax, 0FFFFFFFFh
0x4301E5: jz      short loc_4301F7
0x4301E7: mov     edx, [esp+160h+FindFileData.ftLastWriteTime.dwLowDateTime]
0x4301EB: mov     ecx, [esp+160h+FindFileData.ftLastWriteTime.dwHighDateTime]
0x4301EF: mov     [esp+160h+FileTime.dwLowDateTime], edx
0x4301F3: mov     [esp+160h+FileTime.dwHighDateTime], ecx
0x4301F7: push    eax; hFindFile
0x4301F8: call    ds:FindClose
0x4301FE: lea     edx, [esp+160h+SystemTime]
0x430202: push    edx; lpSystemTime
0x430203: lea     eax, [esp+164h+FileTime]
0x430207: push    eax; lpFileTime
0x430208: call    ds:FileTimeToSystemTime
0x43020E: push    esi; lpLocalTime
0x43020F: lea     ecx, [esp+164h+SystemTime]
0x430213: push    ecx; lpUniversalTime
0x430214: push    0; lpTimeZoneInformation
0x430216: call    ds:SystemTimeToTzSpecificLocalTime
0x43021C: mov     ecx, [esp+160h+var_4]
0x430223: mov     eax, esi
0x430225: pop     esi
0x430226: xor     ecx, esp
0x430228: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43022D: add     esp, 15Ch
0x430233: retn    4
