// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// Rcpp_jSDM_binomial_logit
Rcpp::List Rcpp_jSDM_binomial_logit(const int ngibbs, const int nthin, const int nburn, const arma::umat& Y, const arma::uvec& T, const arma::mat& X, arma::mat beta_start, arma::vec mu_beta, arma::vec V_beta, const int seed, const double ropt, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_logit(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP TSEXP, SEXP XSEXP, SEXP beta_startSEXP, SEXP mu_betaSEXP, SEXP V_betaSEXP, SEXP seedSEXP, SEXP roptSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< const int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const double >::type ropt(roptSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_logit(ngibbs, nthin, nburn, Y, T, X, beta_start, mu_beta, V_beta, seed, ropt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_logit_fixed_site
Rcpp::List Rcpp_jSDM_binomial_logit_fixed_site(const int ngibbs, int nthin, int nburn, const arma::umat& Y, const arma::uvec& T, const arma::mat& X, arma::mat beta_start, arma::vec alpha_start, double V_alpha, arma::vec mu_beta, arma::vec V_beta, const int seed, const double ropt, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_logit_fixed_site(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP TSEXP, SEXP XSEXP, SEXP beta_startSEXP, SEXP alpha_startSEXP, SEXP V_alphaSEXP, SEXP mu_betaSEXP, SEXP V_betaSEXP, SEXP seedSEXP, SEXP roptSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha(V_alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const double >::type ropt(roptSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_logit_fixed_site(ngibbs, nthin, nburn, Y, T, X, beta_start, alpha_start, V_alpha, mu_beta, V_beta, seed, ropt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_logit_fixed_site_lv
Rcpp::List Rcpp_jSDM_binomial_logit_fixed_site_lv(const int ngibbs, int nthin, int nburn, const arma::umat& Y, const arma::uvec& T, const arma::mat& X, arma::mat W_start, arma::mat lambda_start, arma::mat beta_start, arma::vec alpha_start, double V_alpha, arma::vec mu_beta, arma::vec V_beta, arma::vec mu_lambda, arma::vec V_lambda, arma::vec V_W, const int seed, const double ropt, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_logit_fixed_site_lv(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP TSEXP, SEXP XSEXP, SEXP W_startSEXP, SEXP lambda_startSEXP, SEXP beta_startSEXP, SEXP alpha_startSEXP, SEXP V_alphaSEXP, SEXP mu_betaSEXP, SEXP V_betaSEXP, SEXP mu_lambdaSEXP, SEXP V_lambdaSEXP, SEXP V_WSEXP, SEXP seedSEXP, SEXP roptSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W_start(W_startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda_start(lambda_startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha(V_alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_lambda(mu_lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_lambda(V_lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_W(V_WSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const double >::type ropt(roptSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_logit_fixed_site_lv(ngibbs, nthin, nburn, Y, T, X, W_start, lambda_start, beta_start, alpha_start, V_alpha, mu_beta, V_beta, mu_lambda, V_lambda, V_W, seed, ropt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_logit_lv
Rcpp::List Rcpp_jSDM_binomial_logit_lv(const int ngibbs, int nthin, int nburn, const arma::umat& Y, const arma::uvec& T, const arma::mat& X, arma::mat W_start, arma::mat lambda_start, arma::mat beta_start, arma::vec mu_beta, arma::vec V_beta, arma::vec mu_lambda, arma::vec V_lambda, arma::vec V_W, const int seed, const double ropt, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_logit_lv(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP TSEXP, SEXP XSEXP, SEXP W_startSEXP, SEXP lambda_startSEXP, SEXP beta_startSEXP, SEXP mu_betaSEXP, SEXP V_betaSEXP, SEXP mu_lambdaSEXP, SEXP V_lambdaSEXP, SEXP V_WSEXP, SEXP seedSEXP, SEXP roptSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W_start(W_startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda_start(lambda_startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_lambda(mu_lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_lambda(V_lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_W(V_WSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const double >::type ropt(roptSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_logit_lv(ngibbs, nthin, nburn, Y, T, X, W_start, lambda_start, beta_start, mu_beta, V_beta, mu_lambda, V_lambda, V_W, seed, ropt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_logit_rand_site
Rcpp::List Rcpp_jSDM_binomial_logit_rand_site(const int ngibbs, int nthin, int nburn, const arma::umat& Y, const arma::uvec& T, const arma::mat& X, arma::mat beta_start, arma::vec alpha_start, double V_alpha_start, arma::vec mu_beta, arma::vec V_beta, double shape, double rate, const int seed, const double ropt, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_logit_rand_site(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP TSEXP, SEXP XSEXP, SEXP beta_startSEXP, SEXP alpha_startSEXP, SEXP V_alpha_startSEXP, SEXP mu_betaSEXP, SEXP V_betaSEXP, SEXP shapeSEXP, SEXP rateSEXP, SEXP seedSEXP, SEXP roptSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha_start(V_alpha_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const double >::type ropt(roptSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_logit_rand_site(ngibbs, nthin, nburn, Y, T, X, beta_start, alpha_start, V_alpha_start, mu_beta, V_beta, shape, rate, seed, ropt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_logit_rand_site_lv
Rcpp::List Rcpp_jSDM_binomial_logit_rand_site_lv(const int ngibbs, int nthin, int nburn, const arma::umat& Y, const arma::uvec& T, const arma::mat& X, arma::mat W_start, arma::mat lambda_start, arma::mat beta_start, arma::vec alpha_start, double V_alpha_start, arma::vec mu_beta, arma::vec V_beta, arma::vec mu_lambda, arma::vec V_lambda, arma::vec V_W, double shape, double rate, const int seed, const double ropt, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_logit_rand_site_lv(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP TSEXP, SEXP XSEXP, SEXP W_startSEXP, SEXP lambda_startSEXP, SEXP beta_startSEXP, SEXP alpha_startSEXP, SEXP V_alpha_startSEXP, SEXP mu_betaSEXP, SEXP V_betaSEXP, SEXP mu_lambdaSEXP, SEXP V_lambdaSEXP, SEXP V_WSEXP, SEXP shapeSEXP, SEXP rateSEXP, SEXP seedSEXP, SEXP roptSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W_start(W_startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda_start(lambda_startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha_start(V_alpha_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_lambda(mu_lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_lambda(V_lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type V_W(V_WSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const double >::type ropt(roptSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_logit_rand_site_lv(ngibbs, nthin, nburn, Y, T, X, W_start, lambda_start, beta_start, alpha_start, V_alpha_start, mu_beta, V_beta, mu_lambda, V_lambda, V_W, shape, rate, seed, ropt, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_probit_block
Rcpp::List Rcpp_jSDM_binomial_probit_block(const int ngibbs, const int nthin, const int nburn, const arma::umat& Y, const arma::mat& X, const arma::mat& beta_start, const arma::mat& V_beta, const arma::vec& mu_beta, const int seed, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_probit_block(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP XSEXP, SEXP beta_startSEXP, SEXP V_betaSEXP, SEXP mu_betaSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< const int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_probit_block(ngibbs, nthin, nburn, Y, X, beta_start, V_beta, mu_beta, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_probit_block_fixed_site
Rcpp::List Rcpp_jSDM_binomial_probit_block_fixed_site(const int ngibbs, const int nthin, const int nburn, const arma::umat& Y, const arma::mat& X, const arma::mat& beta_start, const arma::mat& V_beta, const arma::vec& mu_beta, arma::vec alpha_start, double V_alpha, const int seed, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_probit_block_fixed_site(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP XSEXP, SEXP beta_startSEXP, SEXP V_betaSEXP, SEXP mu_betaSEXP, SEXP alpha_startSEXP, SEXP V_alphaSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< const int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha(V_alphaSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_probit_block_fixed_site(ngibbs, nthin, nburn, Y, X, beta_start, V_beta, mu_beta, alpha_start, V_alpha, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_probit_block_fixed_site_lv
Rcpp::List Rcpp_jSDM_binomial_probit_block_fixed_site_lv(const int ngibbs, const int nthin, const int nburn, const arma::umat& Y, const arma::mat& X, const arma::mat& param_start, const arma::mat& V_param, const arma::vec& mu_param, arma::mat V_W, arma::mat W_start, arma::vec alpha_start, double V_alpha, const int seed, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_probit_block_fixed_site_lv(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP XSEXP, SEXP param_startSEXP, SEXP V_paramSEXP, SEXP mu_paramSEXP, SEXP V_WSEXP, SEXP W_startSEXP, SEXP alpha_startSEXP, SEXP V_alphaSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< const int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type param_start(param_startSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V_param(V_paramSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_param(mu_paramSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V_W(V_WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W_start(W_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha(V_alphaSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_probit_block_fixed_site_lv(ngibbs, nthin, nburn, Y, X, param_start, V_param, mu_param, V_W, W_start, alpha_start, V_alpha, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_probit_block_lv
Rcpp::List Rcpp_jSDM_binomial_probit_block_lv(const int ngibbs, const int nthin, const int nburn, const arma::umat& Y, const arma::mat& X, const arma::mat& param_start, const arma::mat& V_param, const arma::vec& mu_param, arma::mat V_W, arma::mat W_start, const int seed, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_probit_block_lv(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP XSEXP, SEXP param_startSEXP, SEXP V_paramSEXP, SEXP mu_paramSEXP, SEXP V_WSEXP, SEXP W_startSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< const int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type param_start(param_startSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V_param(V_paramSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_param(mu_paramSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V_W(V_WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W_start(W_startSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_probit_block_lv(ngibbs, nthin, nburn, Y, X, param_start, V_param, mu_param, V_W, W_start, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_probit_block_rand_site
Rcpp::List Rcpp_jSDM_binomial_probit_block_rand_site(const int ngibbs, const int nthin, const int nburn, const arma::umat& Y, const arma::mat& X, const arma::mat& beta_start, const arma::mat& V_beta, const arma::vec& mu_beta, arma::vec alpha_start, double V_alpha_start, double shape, double rate, const int seed, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_probit_block_rand_site(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP XSEXP, SEXP beta_startSEXP, SEXP V_betaSEXP, SEXP mu_betaSEXP, SEXP alpha_startSEXP, SEXP V_alpha_startSEXP, SEXP shapeSEXP, SEXP rateSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< const int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V_beta(V_betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha_start(V_alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_probit_block_rand_site(ngibbs, nthin, nburn, Y, X, beta_start, V_beta, mu_beta, alpha_start, V_alpha_start, shape, rate, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_jSDM_binomial_probit_block_rand_site_lv
Rcpp::List Rcpp_jSDM_binomial_probit_block_rand_site_lv(const int ngibbs, const int nthin, const int nburn, const arma::umat& Y, const arma::mat& X, const arma::mat& param_start, const arma::mat& V_param, const arma::vec& mu_param, arma::mat V_W, arma::mat W_start, arma::vec alpha_start, double V_alpha_start, double shape, double rate, const int seed, const int verbose);
RcppExport SEXP _jSDM_Rcpp_jSDM_binomial_probit_block_rand_site_lv(SEXP ngibbsSEXP, SEXP nthinSEXP, SEXP nburnSEXP, SEXP YSEXP, SEXP XSEXP, SEXP param_startSEXP, SEXP V_paramSEXP, SEXP mu_paramSEXP, SEXP V_WSEXP, SEXP W_startSEXP, SEXP alpha_startSEXP, SEXP V_alpha_startSEXP, SEXP shapeSEXP, SEXP rateSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type ngibbs(ngibbsSEXP);
    Rcpp::traits::input_parameter< const int >::type nthin(nthinSEXP);
    Rcpp::traits::input_parameter< const int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type param_start(param_startSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V_param(V_paramSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_param(mu_paramSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V_W(V_WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W_start(W_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type V_alpha_start(V_alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_jSDM_binomial_probit_block_rand_site_lv(ngibbs, nthin, nburn, Y, X, param_start, V_param, mu_param, V_W, W_start, alpha_start, V_alpha_start, shape, rate, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jSDM_Rcpp_jSDM_binomial_logit", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_logit, 12},
    {"_jSDM_Rcpp_jSDM_binomial_logit_fixed_site", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_logit_fixed_site, 14},
    {"_jSDM_Rcpp_jSDM_binomial_logit_fixed_site_lv", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_logit_fixed_site_lv, 19},
    {"_jSDM_Rcpp_jSDM_binomial_logit_lv", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_logit_lv, 17},
    {"_jSDM_Rcpp_jSDM_binomial_logit_rand_site", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_logit_rand_site, 16},
    {"_jSDM_Rcpp_jSDM_binomial_logit_rand_site_lv", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_logit_rand_site_lv, 21},
    {"_jSDM_Rcpp_jSDM_binomial_probit_block", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_probit_block, 10},
    {"_jSDM_Rcpp_jSDM_binomial_probit_block_fixed_site", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_probit_block_fixed_site, 12},
    {"_jSDM_Rcpp_jSDM_binomial_probit_block_fixed_site_lv", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_probit_block_fixed_site_lv, 14},
    {"_jSDM_Rcpp_jSDM_binomial_probit_block_lv", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_probit_block_lv, 12},
    {"_jSDM_Rcpp_jSDM_binomial_probit_block_rand_site", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_probit_block_rand_site, 14},
    {"_jSDM_Rcpp_jSDM_binomial_probit_block_rand_site_lv", (DL_FUNC) &_jSDM_Rcpp_jSDM_binomial_probit_block_rand_site_lv, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_jSDM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
