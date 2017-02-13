// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "reticulate_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// py_initialize
void py_initialize(const std::string& python, const std::string& libpython, const std::string& pythonhome, const std::string& virtualenv_activate, bool python3, const std::string& numpy_load_error);
RcppExport SEXP reticulate_py_initialize(SEXP pythonSEXP, SEXP libpythonSEXP, SEXP pythonhomeSEXP, SEXP virtualenv_activateSEXP, SEXP python3SEXP, SEXP numpy_load_errorSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type python(pythonSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type libpython(libpythonSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type pythonhome(pythonhomeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type virtualenv_activate(virtualenv_activateSEXP);
    Rcpp::traits::input_parameter< bool >::type python3(python3SEXP);
    Rcpp::traits::input_parameter< const std::string& >::type numpy_load_error(numpy_load_errorSEXP);
    py_initialize(python, libpython, pythonhome, virtualenv_activate, python3, numpy_load_error);
    return R_NilValue;
END_RCPP
}
// py_finalize
void py_finalize();
RcppExport SEXP reticulate_py_finalize() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    py_finalize();
    return R_NilValue;
END_RCPP
}
// py_is_none
bool py_is_none(PyObjectRef x);
RcppExport SEXP reticulate_py_is_none(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_none(x));
    return rcpp_result_gen;
END_RCPP
}
// py_str_impl
CharacterVector py_str_impl(PyObjectRef x);
RcppExport SEXP reticulate_py_str_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_str_impl(x));
    return rcpp_result_gen;
END_RCPP
}
// py_print
void py_print(PyObjectRef x);
RcppExport SEXP reticulate_py_print(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    py_print(x);
    return R_NilValue;
END_RCPP
}
// py_is_callable
bool py_is_callable(PyObjectRef x);
RcppExport SEXP reticulate_py_is_callable(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_callable(x));
    return rcpp_result_gen;
END_RCPP
}
// py_is_function
bool py_is_function(PyObjectRef x);
RcppExport SEXP reticulate_py_is_function(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_function(x));
    return rcpp_result_gen;
END_RCPP
}
// py_is_null_xptr
bool py_is_null_xptr(PyObjectRef x);
RcppExport SEXP reticulate_py_is_null_xptr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_null_xptr(x));
    return rcpp_result_gen;
END_RCPP
}
// py_validate_xptr
void py_validate_xptr(PyObjectRef x);
RcppExport SEXP reticulate_py_validate_xptr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    py_validate_xptr(x);
    return R_NilValue;
END_RCPP
}
// py_have_numpy
bool py_have_numpy();
RcppExport SEXP reticulate_py_have_numpy() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(py_have_numpy());
    return rcpp_result_gen;
END_RCPP
}
// py_list_attributes_impl
std::vector<std::string> py_list_attributes_impl(PyObjectRef x);
RcppExport SEXP reticulate_py_list_attributes_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_list_attributes_impl(x));
    return rcpp_result_gen;
END_RCPP
}
// py_has_attr
bool py_has_attr(PyObjectRef x, const std::string& name);
RcppExport SEXP reticulate_py_has_attr(SEXP xSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(py_has_attr(x, name));
    return rcpp_result_gen;
END_RCPP
}
// py_get_attr_impl
PyObjectRef py_get_attr_impl(PyObjectRef x, const std::string& name, bool silent);
RcppExport SEXP reticulate_py_get_attr_impl(SEXP xSEXP, SEXP nameSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_attr_impl(x, name, silent));
    return rcpp_result_gen;
END_RCPP
}
// py_get_attribute_types
IntegerVector py_get_attribute_types(PyObjectRef x, const std::vector<std::string>& attributes);
RcppExport SEXP reticulate_py_get_attribute_types(SEXP xSEXP, SEXP attributesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type attributes(attributesSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_attribute_types(x, attributes));
    return rcpp_result_gen;
END_RCPP
}
// py_ref_to_r
SEXP py_ref_to_r(PyObjectRef x);
RcppExport SEXP reticulate_py_ref_to_r(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_ref_to_r(x));
    return rcpp_result_gen;
END_RCPP
}
// py_call_impl
SEXP py_call_impl(PyObjectRef x, List args, List keywords);
RcppExport SEXP reticulate_py_call_impl(SEXP xSEXP, SEXP argsSEXP, SEXP keywordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< List >::type keywords(keywordsSEXP);
    rcpp_result_gen = Rcpp::wrap(py_call_impl(x, args, keywords));
    return rcpp_result_gen;
END_RCPP
}
// py_dict
PyObjectRef py_dict(const List& keys, const List& items);
RcppExport SEXP reticulate_py_dict(SEXP keysSEXP, SEXP itemsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const List& >::type items(itemsSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict(keys, items));
    return rcpp_result_gen;
END_RCPP
}
// py_tuple
PyObjectRef py_tuple(const List& items);
RcppExport SEXP reticulate_py_tuple(SEXP itemsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type items(itemsSEXP);
    rcpp_result_gen = Rcpp::wrap(py_tuple(items));
    return rcpp_result_gen;
END_RCPP
}
// py_module_import
PyObjectRef py_module_import(const std::string& module);
RcppExport SEXP reticulate_py_module_import(SEXP moduleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    rcpp_result_gen = Rcpp::wrap(py_module_import(module));
    return rcpp_result_gen;
END_RCPP
}
// py_module_proxy_import
void py_module_proxy_import(PyObjectRef proxy);
RcppExport SEXP reticulate_py_module_proxy_import(SEXP proxySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type proxy(proxySEXP);
    py_module_proxy_import(proxy);
    return R_NilValue;
END_RCPP
}
// py_list_submodules
CharacterVector py_list_submodules(const std::string& module);
RcppExport SEXP reticulate_py_list_submodules(SEXP moduleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    rcpp_result_gen = Rcpp::wrap(py_list_submodules(module));
    return rcpp_result_gen;
END_RCPP
}
// py_iterate
List py_iterate(PyObjectRef x, Function f);
RcppExport SEXP reticulate_py_iterate(SEXP xSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(py_iterate(x, f));
    return rcpp_result_gen;
END_RCPP
}
// py_run_string_impl
PyObjectRef py_run_string_impl(const std::string& code);
RcppExport SEXP reticulate_py_run_string_impl(SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type code(codeSEXP);
    rcpp_result_gen = Rcpp::wrap(py_run_string_impl(code));
    return rcpp_result_gen;
END_RCPP
}
// py_run_file_impl
PyObjectRef py_run_file_impl(const std::string& file);
RcppExport SEXP reticulate_py_run_file_impl(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(py_run_file_impl(file));
    return rcpp_result_gen;
END_RCPP
}
