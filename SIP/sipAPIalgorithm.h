/*
 * Internal module API header file.
 *
 * Generated by SIP 4.19.13
 */

#ifndef _algorithmAPI_H
#define _algorithmAPI_H

#include <sip.h>

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_algorithm 0
#define sipName_algorithm &sipStrings_algorithm[0]
#define sipNameNr_add 10
#define sipName_add &sipStrings_algorithm[10]

#define sipMalloc                   sipAPI_algorithm->api_malloc
#define sipFree                     sipAPI_algorithm->api_free
#define sipBuildResult              sipAPI_algorithm->api_build_result
#define sipCallMethod               sipAPI_algorithm->api_call_method
#define sipCallProcedureMethod      sipAPI_algorithm->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_algorithm->api_call_error_handler
#define sipParseResultEx            sipAPI_algorithm->api_parse_result_ex
#define sipParseResult              sipAPI_algorithm->api_parse_result
#define sipParseArgs                sipAPI_algorithm->api_parse_args
#define sipParseKwdArgs             sipAPI_algorithm->api_parse_kwd_args
#define sipParsePair                sipAPI_algorithm->api_parse_pair
#define sipInstanceDestroyed        sipAPI_algorithm->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI_algorithm->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI_algorithm->api_convert_from_sequence_index
#define sipConvertFromSliceObject   sipAPI_algorithm->api_convert_from_slice_object
#define sipConvertFromVoidPtr       sipAPI_algorithm->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_algorithm->api_convert_to_void_ptr
#define sipAddException             sipAPI_algorithm->api_add_exception
#define sipNoFunction               sipAPI_algorithm->api_no_function
#define sipNoMethod                 sipAPI_algorithm->api_no_method
#define sipAbstractMethod           sipAPI_algorithm->api_abstract_method
#define sipBadClass                 sipAPI_algorithm->api_bad_class
#define sipBadCatcherResult         sipAPI_algorithm->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_algorithm->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_algorithm->api_bad_operator_arg
#define sipTrace                    sipAPI_algorithm->api_trace
#define sipTransferBack             sipAPI_algorithm->api_transfer_back
#define sipTransferTo               sipAPI_algorithm->api_transfer_to
#define sipTransferBreak            sipAPI_algorithm->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_algorithm->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_algorithm->api_wrapper_type
#define sipWrapperType_Type         sipAPI_algorithm->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_algorithm->api_voidptr_type
#define sipGetPyObject              sipAPI_algorithm->api_get_pyobject
#define sipGetAddress               sipAPI_algorithm->api_get_address
#define sipGetMixinAddress          sipAPI_algorithm->api_get_mixin_address
#define sipGetCppPtr                sipAPI_algorithm->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_algorithm->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_algorithm->api_is_py_method
#define sipCallHook                 sipAPI_algorithm->api_call_hook
#define sipEndThread                sipAPI_algorithm->api_end_thread
#define sipConnectRx                sipAPI_algorithm->api_connect_rx
#define sipDisconnectRx             sipAPI_algorithm->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_algorithm->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_algorithm->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_algorithm->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_algorithm->api_add_type_instance
#define sipFreeSipslot              sipAPI_algorithm->api_free_sipslot
#define sipSameSlot                 sipAPI_algorithm->api_same_slot
#define sipPySlotExtend             sipAPI_algorithm->api_pyslot_extend
#define sipConvertRx                sipAPI_algorithm->api_convert_rx
#define sipAddDelayedDtor           sipAPI_algorithm->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_algorithm->api_can_convert_to_type
#define sipConvertToType            sipAPI_algorithm->api_convert_to_type
#define sipForceConvertToType       sipAPI_algorithm->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_algorithm->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_algorithm->api_convert_to_enum
#define sipConvertToBool            sipAPI_algorithm->api_convert_to_bool
#define sipReleaseType              sipAPI_algorithm->api_release_type
#define sipConvertFromType          sipAPI_algorithm->api_convert_from_type
#define sipConvertFromNewType       sipAPI_algorithm->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_algorithm->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_algorithm->api_convert_from_enum
#define sipGetState                 sipAPI_algorithm->api_get_state
#define sipExportSymbol             sipAPI_algorithm->api_export_symbol
#define sipImportSymbol             sipAPI_algorithm->api_import_symbol
#define sipFindType                 sipAPI_algorithm->api_find_type
#define sipFindNamedEnum            sipAPI_algorithm->api_find_named_enum
#define sipBytes_AsChar             sipAPI_algorithm->api_bytes_as_char
#define sipBytes_AsString           sipAPI_algorithm->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_algorithm->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_algorithm->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_algorithm->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_algorithm->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_algorithm->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_algorithm->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_algorithm->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_algorithm->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_algorithm->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_algorithm->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_algorithm->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_algorithm->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_algorithm->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_algorithm->api_save_slot
#define sipClearAnySlotReference    sipAPI_algorithm->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_algorithm->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_algorithm->api_deprecated
#define sipGetReference             sipAPI_algorithm->api_get_reference
#define sipKeepReference            sipAPI_algorithm->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_algorithm->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_algorithm->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_algorithm->api_type_from_py_type_object
#define sipTypeScope                sipAPI_algorithm->api_type_scope
#define sipResolveTypedef           sipAPI_algorithm->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_algorithm->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_algorithm->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_algorithm->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_algorithm->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_algorithm->api_enable_overflow_checking
#define sipInitMixin                sipAPI_algorithm->api_init_mixin
#define sipExportModule             sipAPI_algorithm->api_export_module
#define sipInitModule               sipAPI_algorithm->api_init_module
#define sipGetInterpreter           sipAPI_algorithm->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_algorithm->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_algorithm->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_algorithm->api_get_type_user_data
#define sipPyTypeDict               sipAPI_algorithm->api_py_type_dict
#define sipPyTypeName               sipAPI_algorithm->api_py_type_name
#define sipGetCFunction             sipAPI_algorithm->api_get_c_function
#define sipGetMethod                sipAPI_algorithm->api_get_method
#define sipFromMethod               sipAPI_algorithm->api_from_method
#define sipGetDate                  sipAPI_algorithm->api_get_date
#define sipFromDate                 sipAPI_algorithm->api_from_date
#define sipGetDateTime              sipAPI_algorithm->api_get_datetime
#define sipFromDateTime             sipAPI_algorithm->api_from_datetime
#define sipGetTime                  sipAPI_algorithm->api_get_time
#define sipFromTime                 sipAPI_algorithm->api_from_time
#define sipIsUserType               sipAPI_algorithm->api_is_user_type
#define sipGetFrame                 sipAPI_algorithm->api_get_frame
#define sipCheckPluginForType       sipAPI_algorithm->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_algorithm->api_unicode_new
#define sipUnicodeWrite             sipAPI_algorithm->api_unicode_write
#define sipUnicodeData              sipAPI_algorithm->api_unicode_data
#define sipGetBufferInfo            sipAPI_algorithm->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_algorithm->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_algorithm->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_algorithm->api_is_derived_class
#define sipGetUserObject            sipAPI_algorithm->api_get_user_object
#define sipSetUserObject            sipAPI_algorithm->api_set_user_object
#define sipRegisterEventHandler     sipAPI_algorithm->api_register_event_handler
#define sipLong_AsChar              sipAPI_algorithm->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_algorithm->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_algorithm->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_algorithm->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_algorithm->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_algorithm->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_algorithm->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_algorithm->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_algorithm->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_algorithm->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_algorithm->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_algorithm->api_map_string_to_class
#define sipMapIntToClass            sipAPI_algorithm->api_map_int_to_class
#define sipFindClass                sipAPI_algorithm->api_find_class
#define sipFindMappedType           sipAPI_algorithm->api_find_mapped_type
#define sipConvertToArray           sipAPI_algorithm->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_algorithm->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_algorithm->api_enable_gc
#define sipPrintObject              sipAPI_algorithm->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_algorithm->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings_algorithm[];

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_algorithm;
extern sipExportedModuleDef sipModuleAPI_algorithm;

#endif