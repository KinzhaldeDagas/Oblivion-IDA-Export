0x404150: mov     eax, [esp+hinst]
0x404154: sub     esp, 14h
0x404157: push    ebx
0x404158: push    ebp
0x404159: push    esi
0x40415A: push    edi
0x40415B: mov     esi, ecx
0x40415D: xor     edi, edi
0x40415F: push    edi; punkOuter
0x404160: lea     ebp, [esi+4]
0x404163: push    ebp; ppvOut
0x404164: push    offset a0ayHvmksDa6c; riidltf
0x404169: push    800h; dwVersion
0x40416E: push    eax; hinst
0x40416F: mov     [esi+18F0h], edi
0x404175: mov     [esi], edi
0x404177: call    DirectInput8Create_0
0x40417C: cmp     bUseJoystick, 1
0x404183: jnz     short loc_4041A7
0x404185: mov     eax, [ebp+0]
0x404188: or      dword ptr [esi], 1
0x40418B: mov     ecx, [eax]
0x40418D: mov     edx, [ecx+10h]
0x404190: push    1
0x404192: push    esi
0x404193: push    offset InputGlobals__InitializeJoystickProperties
0x404198: push    edi
0x404199: push    eax
0x40419A: call    edx
0x40419C: cmp     [esi+18F0h], edi
0x4041A2: jnz     short loc_4041A7
0x4041A4: and     dword ptr [esi], 0FFFFFFFEh
0x4041A7: mov     eax, [ebp+0]
0x4041AA: push    edi
0x4041AB: lea     edx, [esp+28h+hinst]
0x4041AF: push    edx
0x4041B0: mov     [esi+28h], edi
0x4041B3: mov     ecx, [eax]
0x4041B5: push    offset CLSID_GUID_SysKeyboard
0x4041BA: push    eax
0x4041BB: mov     eax, [ecx+0Ch]
0x4041BE: call    eax
0x4041C0: test    eax, eax
0x4041C2: mov     ebx, ds:GetActiveWindow
0x4041C8: jnz     short loc_404244
0x4041CA: mov     eax, [esp+24h+hinst]
0x4041CE: or      dword ptr [esi], 4
0x4041D1: mov     [esi+28h], eax
0x4041D4: mov     edi, [eax]
0x4041D6: add     edi, 34h ; '4'
0x4041D9: cmp     bBackgroundKey, 1
0x4041E0: jnz     short loc_4041F1
0x4041E2: push    16h
0x4041E4: call    ebx ; GetActiveWindow
0x4041E6: mov     ecx, [esi+28h]
0x4041E9: mov     edx, [edi]
0x4041EB: push    eax
0x4041EC: push    ecx
0x4041ED: call    edx
0x4041EF: jmp     short loc_4041FE
0x4041F1: push    15h
0x4041F3: call    ebx ; GetActiveWindow
0x4041F5: mov     ecx, [edi]
0x4041F7: push    eax
0x4041F8: mov     eax, [esi+28h]
0x4041FB: push    eax
0x4041FC: call    ecx
0x4041FE: mov     eax, [esi+28h]
0x404201: mov     edx, [eax]
0x404203: push    offset stru_A78E5C
0x404208: push    eax
0x404209: mov     eax, [edx+2Ch]
0x40420C: call    eax
0x40420E: xor     eax, eax
0x404210: mov     [esp+24h+var_8], eax
0x404214: mov     [esp+24h+var_C], eax
0x404218: mov     eax, [esi+28h]
0x40421B: lea     edx, [esp+24h+var_14]
0x40421F: push    edx
0x404220: mov     [esp+28h+var_14], 14h
0x404228: mov     [esp+28h+var_10], 10h
0x404230: mov     [esp+28h+var_4], 20h ; ' '
0x404238: mov     ecx, [eax]
0x40423A: push    1
0x40423C: push    eax
0x40423D: mov     eax, [ecx+18h]
0x404240: call    eax
0x404242: xor     edi, edi
0x404244: mov     [esi+2Ch], edi
0x404247: push    edi; fSwap
0x404248: mov     edi, ds:SwapMouseButton
0x40424E: call    edi ; SwapMouseButton
0x404250: push    eax; fSwap
0x404251: mov     [esi+1B48h], eax
0x404257: call    edi ; SwapMouseButton
0x404259: call    ds:GetDoubleClickTime
0x40425F: mov     [esi+1B4Ch], eax
0x404265: xor     eax, eax
0x404267: mov     [esi+1B58h], eax
0x40426D: mov     [esi+1B5Ch], eax
0x404273: mov     [esi+1B60h], eax
0x404279: mov     [esi+1B64h], eax
0x40427F: mov     [esi+1B68h], eax
0x404285: push    2Ch ; ','
0x404287: mov     [esi+1B6Ch], eax
0x40428D: push    eax
0x40428E: lea     edi, [esi+1AF4h]
0x404294: mov     [esi+1B70h], eax
0x40429A: push    edi
0x40429B: mov     [esi+1B74h], eax
0x4042A1: call    __memset
0x4042A6: add     esp, 0Ch
0x4042A9: mov     dword ptr [edi], 2Ch ; ','
0x4042AF: cmp     bBackgroundMouse, 1
0x4042B6: jnz     short loc_4042BB
0x4042B8: or      dword ptr [esi], 8
0x4042BB: mov     eax, [ebp+0]
0x4042BE: mov     ecx, [eax]
0x4042C0: push    0
0x4042C2: lea     edx, [esp+28h+hinst]
0x4042C6: push    edx
0x4042C7: push    offset CLSID_GUID_SysMouse
0x4042CC: push    eax
0x4042CD: mov     eax, [ecx+0Ch]
0x4042D0: call    eax
0x4042D2: test    eax, eax
0x4042D4: jnz     short loc_404317
0x4042D6: mov     eax, [esp+24h+hinst]
0x4042DA: or      dword ptr [esi], 2
0x4042DD: mov     [esi+2Ch], eax
0x4042E0: mov     ecx, [eax]
0x4042E2: mov     edx, [ecx+0Ch]
0x4042E5: push    edi
0x4042E6: push    eax
0x4042E7: call    edx
0x4042E9: mov     eax, [esi+2Ch]
0x4042EC: mov     edi, [eax]
0x4042EE: add     edi, 34h ; '4'
0x4042F1: test    byte ptr [esi], 8
0x4042F4: jz      short loc_4042FA
0x4042F6: push    6
0x4042F8: jmp     short loc_4042FC
0x4042FA: push    5
0x4042FC: call    ebx ; GetActiveWindow
0x4042FE: mov     ecx, [esi+2Ch]
0x404301: mov     edx, [edi]
0x404303: push    eax
0x404304: push    ecx
0x404305: call    edx
0x404307: mov     eax, [esi+2Ch]
0x40430A: mov     ecx, [eax]
0x40430C: mov     edx, [ecx+2Ch]
0x40430F: push    offset stru_A78A4C
0x404314: push    eax
0x404315: call    edx
0x404317: push    500h
0x40431C: lea     eax, [esi+30h]
0x40431F: push    0
0x404321: push    eax
0x404322: call    __memset
0x404327: push    200h
0x40432C: lea     ecx, [esi+18F4h]
0x404332: push    0
0x404334: push    ecx
0x404335: call    __memset
0x40433A: xor     eax, eax
0x40433C: mov     [esi+1B20h], eax
0x404342: mov     [esi+1B24h], eax
0x404348: mov     [esi+1B28h], eax
0x40434E: mov     [esi+1B2Ch], eax
0x404354: mov     [esi+1B30h], eax
0x40435A: mov     [esi+1B34h], eax
0x404360: mov     [esi+1B38h], eax
0x404366: mov     [esi+1B3Ch], eax
0x40436C: mov     [esi+1B40h], eax
0x404372: add     esp, 18h
0x404375: mov     [esi+1B44h], eax
0x40437B: push    3; scheme
0x40437D: mov     ecx, esi; this
0x40437F: mov     [esi+1B7Ch], al
0x404385: mov     [esi+1B7Dh], al
0x40438B: call    InputGlobals__ResetControlMap
0x404390: pop     edi
0x404391: mov     eax, esi
0x404393: pop     esi
0x404394: pop     ebp
0x404395: pop     ebx
0x404396: add     esp, 14h
0x404399: retn    4
