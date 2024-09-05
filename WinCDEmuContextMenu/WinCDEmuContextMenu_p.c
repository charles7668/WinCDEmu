

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for WinCDEmuContextMenu.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "WinCDEmuContextMenu_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _WinCDEmuContextMenu_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } WinCDEmuContextMenu_MIDL_TYPE_FORMAT_STRING;

typedef struct _WinCDEmuContextMenu_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } WinCDEmuContextMenu_MIDL_PROC_FORMAT_STRING;

typedef struct _WinCDEmuContextMenu_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } WinCDEmuContextMenu_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const WinCDEmuContextMenu_MIDL_TYPE_FORMAT_STRING WinCDEmuContextMenu__MIDL_TypeFormatString;
extern const WinCDEmuContextMenu_MIDL_PROC_FORMAT_STRING WinCDEmuContextMenu__MIDL_ProcFormatString;
extern const WinCDEmuContextMenu_MIDL_EXPR_FORMAT_STRING WinCDEmuContextMenu__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IVCDImgContextMenu_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVCDImgContextMenu_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IDriveContextMenu_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDriveContextMenu_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const WinCDEmuContextMenu_MIDL_PROC_FORMAT_STRING WinCDEmuContextMenu__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const WinCDEmuContextMenu_MIDL_TYPE_FORMAT_STRING WinCDEmuContextMenu__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVCDImgContextMenu, ver. 0.0,
   GUID={0x918988CF,0x2AFC,0x404C,{0x90,0xF2,0x54,0x43,0xD7,0xA3,0x19,0xE7}} */

#pragma code_seg(".orpc")
static const unsigned short IVCDImgContextMenu_FormatStringOffsetTable[] =
    {
    0
    };



/* Object interface: IDriveContextMenu, ver. 0.0,
   GUID={0xE0333ECC,0x5824,0x4AD9,{0x83,0x65,0xCC,0xDD,0x20,0x18,0x46,0x74}} */

#pragma code_seg(".orpc")
static const unsigned short IDriveContextMenu_FormatStringOffsetTable[] =
    {
    0
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for WinCDEmuContextMenu.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVCDImgContextMenu, ver. 0.0,
   GUID={0x918988CF,0x2AFC,0x404C,{0x90,0xF2,0x54,0x43,0xD7,0xA3,0x19,0xE7}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IVCDImgContextMenu_Ndr64ProcTable[] =
    {
    0
    };


static const MIDL_SYNTAX_INFO IVCDImgContextMenu_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    WinCDEmuContextMenu__MIDL_ProcFormatString.Format,
    &IVCDImgContextMenu_FormatStringOffsetTable[-3],
    WinCDEmuContextMenu__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IVCDImgContextMenu_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IVCDImgContextMenu_ProxyInfo =
    {
    &Object_StubDesc,
    WinCDEmuContextMenu__MIDL_ProcFormatString.Format,
    &IVCDImgContextMenu_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IVCDImgContextMenu_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IVCDImgContextMenu_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WinCDEmuContextMenu__MIDL_ProcFormatString.Format,
    (unsigned short *) &IVCDImgContextMenu_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IVCDImgContextMenu_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(3) _IVCDImgContextMenuProxyVtbl = 
{
    0,
    &IID_IVCDImgContextMenu,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IVCDImgContextMenuStubVtbl =
{
    &IID_IVCDImgContextMenu,
    &IVCDImgContextMenu_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDriveContextMenu, ver. 0.0,
   GUID={0xE0333ECC,0x5824,0x4AD9,{0x83,0x65,0xCC,0xDD,0x20,0x18,0x46,0x74}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IDriveContextMenu_Ndr64ProcTable[] =
    {
    0
    };


static const MIDL_SYNTAX_INFO IDriveContextMenu_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    WinCDEmuContextMenu__MIDL_ProcFormatString.Format,
    &IDriveContextMenu_FormatStringOffsetTable[-3],
    WinCDEmuContextMenu__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IDriveContextMenu_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IDriveContextMenu_ProxyInfo =
    {
    &Object_StubDesc,
    WinCDEmuContextMenu__MIDL_ProcFormatString.Format,
    &IDriveContextMenu_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IDriveContextMenu_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IDriveContextMenu_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    WinCDEmuContextMenu__MIDL_ProcFormatString.Format,
    (unsigned short *) &IDriveContextMenu_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IDriveContextMenu_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(3) _IDriveContextMenuProxyVtbl = 
{
    0,
    &IID_IDriveContextMenu,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IDriveContextMenuStubVtbl =
{
    &IID_IDriveContextMenu,
    &IDriveContextMenu_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    WinCDEmuContextMenu__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _WinCDEmuContextMenu_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDriveContextMenuProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVCDImgContextMenuProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _WinCDEmuContextMenu_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDriveContextMenuStubVtbl,
    ( CInterfaceStubVtbl *) &_IVCDImgContextMenuStubVtbl,
    0
};

PCInterfaceName const _WinCDEmuContextMenu_InterfaceNamesList[] = 
{
    "IDriveContextMenu",
    "IVCDImgContextMenu",
    0
};


#define _WinCDEmuContextMenu_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _WinCDEmuContextMenu, pIID, n)

int __stdcall _WinCDEmuContextMenu_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _WinCDEmuContextMenu, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _WinCDEmuContextMenu, 2, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo WinCDEmuContextMenu_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _WinCDEmuContextMenu_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _WinCDEmuContextMenu_StubVtblList,
    (const PCInterfaceName * ) & _WinCDEmuContextMenu_InterfaceNamesList,
    0, /* no delegation */
    & _WinCDEmuContextMenu_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

